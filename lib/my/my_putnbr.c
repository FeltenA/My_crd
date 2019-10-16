/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

#include <unistd.h>

void my_putchar(char c);

void print_num(int a)
{
    int b;
    char c;

    c = 48;
    for ( b = 0; b <= 9; ++b) {
        if ( a == b )
            my_putchar(c);
        ++c;
    }
}

void print_zero_neg(int n)
{
    int save;
    int save2;
    int mod = -1000000000;
    int i;

    if (n == 0)
        print_num(0);
    if ( n < 0 ) {
        my_putchar('-');
        save = n;
        for (i = 0; i <= 9; ++i) {
            save2 = save / mod;
            if ( n <= mod ) {
                print_num(save2);
                save = save - save2 * mod;
            }
            mod = mod / 10;
        }
    }
}

void my_putnbr(int n)
{
    int mod;
    int i;
    int save;
    int save2;

    if ( n > 0 ) {
        mod = 1000000000;
        save = n;
        for (i = 0; i <= 9; ++i) {
            save2 = save / mod;
            if ( n >= mod ) {
                print_num(save2);
                save = save - save2 * mod;
            }
            mod = mod / 10;
        }
    }
    print_zero_neg(n);
}
