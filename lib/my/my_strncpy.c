/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;
    int nmin;

    i = 0;
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        ++i;
    }
    while (i < n) {
        dest[i] = '\0';
        ++i;
    }
    nmin = n - 1;
    if (i == nmin)
        dest[i] = '\0';
    return (dest);
}
