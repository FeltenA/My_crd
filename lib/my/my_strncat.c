/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

char *my_strncat(char *dest, const char *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        ++i;
    }
    while (j < nb && src[j] != '\0') {
        if (src[j] != '\0') {
            dest[i] = src[j];
        }
        ++j;
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}
