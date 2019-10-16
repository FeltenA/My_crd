/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            if (s1[i] < s2[i])
                return (-1);
            if (s1[i] > s2[i])
                return (1);
        }
        ++i;
    }
    if (s1[i] == '\0' && s2[i] != '\0' && i < n)
        return (-1);
    if (s1[i] != '\0' && s2[i] == '\0' && i < n)
        return (1);
    return (0);
}
