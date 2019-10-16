/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <stdlib.h>

int check_len(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return (i);
}

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n) {
        if (s1[i] != s2[i]) {
            if (s1[i] < s2[i])
                return (-1);
            if (s1[i] > s2[i])
                return (1);
        }
        ++i;
    }
    return (0);
}

char *my_strstr(char *str, const char *to_find)
{
    int i = 0;
    int len;
    int num;
    char *pos = NULL;

    len = check_len(to_find);
    if (len == 0)
        return (str);
    while (str[i] != '\0' && pos == NULL) {
        if (str[i] == to_find[0]) {
            num = my_strncmp(&str[i], to_find, len);
            if (num == 0)
                pos = &str[i];
        }
        ++i;
    }
    return (pos);
}
