/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <unistd.h>

void my_putchar(char c);

void my_isneg(int n)
{
    if ( n < 0 )
        my_putchar('N');
    else
        my_putchar('P');
}
