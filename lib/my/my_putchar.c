/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
