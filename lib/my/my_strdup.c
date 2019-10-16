/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <stdlib.h>

char *my_strdup(const char *src)
{
    char *copy;
    int len;
    int i;

    len = 0;
    while (src[len] != '\0') {
        ++len;
    }
    copy = malloc(len * sizeof(*src));
    if (copy == 0)
        return (0);
    for (i = 0; i <= len; ++i) {
        copy[i] = src[i];
    }
    return (copy);
}
