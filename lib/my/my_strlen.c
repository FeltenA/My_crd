/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return (i);
}
