/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

char *my_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0') {
        ++i;
    }
    j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        ++i;
        ++j;
    }
    dest[i] = '\0';
    return (dest);
}
