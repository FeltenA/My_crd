/*
** ETNA PROJECT, 11/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#ifndef ___MY_CRD__
# define __MY_CRD__

typedef struct linked_list {
    int key;
    int value;
    struct linked_list *next;
} linked_list_t;

linked_list_t *initialize_list(int key, int value);
linked_list_t *add_to_list(linked_list_t *list, int key, int value);
void lookup_in_list(linked_list_t *list, int key);
linked_list_t *rm_in_list(linked_list_t *list, int key);

#endif
