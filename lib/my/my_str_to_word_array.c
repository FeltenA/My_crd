/*
** ETNA PROJECT, 08/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <stdlib.h>

int check_alnum(char c)
{
    if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    return (0);
}

int check_lenght(const char *str)
{
    int   i = 0;
    int   num_word = 0;

    while (str[i] != '\0')
        {
            if (check_alnum(str[i]) == 1 && check_alnum(str[i + 1]) == 0)
                num_word = num_word + 1;
            ++i;
        }
    return (num_word);
}

int check_lenght_num(const char *str, int i)
{
    int len = 0;
    int j = i;

    while (check_alnum(str[j]) == 1) {
        ++len;
        ++j;
    }
    return (len);
}

char *fill_array(const char *str, char *word_array, int *i)
{
    int k = 0;

    while (check_alnum(str[*i]) == 1) {
        word_array[k] = str[*i];
        ++*i;
        ++k;
    }
    return (word_array);
}

char **my_str_to_word_array(const char *str)
{
    int len = check_lenght(str);
    char **word_array = malloc(len * sizeof(*word_array));
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (check_alnum(str[i]) == 1) {
            len = check_lenght_num(str, i);
            word_array[j] = malloc(len * sizeof(*word_array[j]));
            word_array[j] = fill_array(str, word_array[j], &i);
            ++j;
        } else {
        ++i;
        }
    }
    word_array[j] = NULL;
    return (word_array);
}
