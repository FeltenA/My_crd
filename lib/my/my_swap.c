/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

void my_swap(int *a, int *b)
{
    int save;

    save = *a;
    *a = *b;
    *b = save;
}
