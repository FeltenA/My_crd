/*
** ETNA PROJECT, 11/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <stdlib.h>
#include "../include/my_list.h"
#include "../include/my.h"

linked_list_t *initialize_list(int key, int value)
{
    linked_list_t *node;

    node = malloc(sizeof(*node));
    if (node == 0)
        return (0);
    node->key = key;
    node->value = value;
    node->next = NULL;
    my_putnbr(key);
    my_putchar('\n');
    return (node);
}

linked_list_t *add_to_list(linked_list_t *list, int key, int value)
{
    linked_list_t *node = list;
    linked_list_t *new;

    while (node->next != NULL && node->key != key) {
        node = node->next;
    }
    if (node->key == key) {
        node->value = value;
    } else {
        new = malloc(sizeof(*new));
        if (new == 0)
            return (0);
        new->key = key;
        new->next = list;
        list = new;
    }
    my_putnbr(key);
    my_putchar('\n');
    return (list);
}

void lookup_in_list(linked_list_t *list, int key)
{
    while (list != NULL && list->next != NULL && list->key != key) {
        list = list->next;
    }
    if (list != NULL && list->key == key) {
        my_putnbr(list->value);
    } else {
        my_putnbr(-1);
    }
    my_putchar('\n');
}

void rm_in_middle(linked_list_t **list, linked_list_t **node)
{
    my_putnbr((*node)->value);
    *list = (*node)->next;
    free(*node);
}

linked_list_t *rm_in_list(linked_list_t *list, int key)
{
    linked_list_t *first = list;
    linked_list_t *node = list;

    if (list != NULL && first->key != key) {
        node = list->next;
        while (node->next != NULL && node->key != key) {
            list = list->next;
            node = list->next;
        }
    }
    if (list != NULL && node->key == key && first->key == key) {
        rm_in_middle(&first, &node);
    } else if (list != NULL && node->key == key && first->key != key) {
        rm_in_middle(&(list->next), &node);
    } else {
        my_putnbr(-1);
    }
    my_putchar('\n');
    return (first);
}
