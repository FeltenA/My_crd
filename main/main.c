/*
** ETNA PROJECT, 11/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <stdlib.h>
#include "../include/my_list.h"
#include "../include/my.h"

linked_list_t *execute_command(int com, int key, int value, linked_list_t *list)
{
    if (com == 1 && list != NULL) {
        list = add_to_list(list, key, value);
    } else if (com == 1 && list == NULL) {
        list = initialize_list(key, value);
    } else if (com == 0) {
        lookup_in_list(list, key);
    } else if (com == 2) {
        list = rm_in_list(list, key);
    }
    return (list);
}

linked_list_t *analize_command(char *str, linked_list_t *list)
{
    int i = 0;
    int key;
    int value = 0;
    int command = 0;
    char **com;

    com = my_str_to_word_array(str);
    while (com[i] != NULL && i <= 1) {
        if (i == 0)
            key = my_getnbr(com[i]);
        if (i == 1) {
            if (com[1][0] == 'D') {
                command = 2;
            } else {
                value = my_getnbr(com[i]);
                command = 1;
            }
        }
        free(com[i]);
        ++i;
    }
    list = execute_command(command, key, value, list);
    free(com);
    return (list);
}

int main()
{
    char *word_array;
    linked_list_t *list = NULL;

    word_array = my_readline();
    while (word_array != NULL) {
        list = analize_command(word_array, list);
        free(word_array);
        word_array = my_readline();
    }
    return (0);
}
