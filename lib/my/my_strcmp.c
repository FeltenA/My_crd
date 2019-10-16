/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

int char_to_num(char a)
{
    int num;
    char chr;

    num = 0;
    chr = 0;
    while (chr != a) {
        ++chr;
        ++num;
    }
    return (num);
}

int add_nums(const char *s1, const char *s2, int *i)
{
    int add;
    int num;
    int num2;

    add = 0;
    *i = 0;
    while (s1[*i] != '\0' && s2[*i] != '\0' && add == 0) {
        if (s1[*i] != s2[*i]) {
            num = char_to_num(s1[*i]);
            num2 = char_to_num(s2[*i]);
            add = num - num2;
        }
        ++*i;
    }
    return (add);
}

int my_strcmp(const char *s1, const char *s2)
{
    int i;
    int add;
    int sol;

    add = add_nums(s1, s2, &i);
    if (add > 0 || ( s1[i] != '\0' && s2[i] == '\0'))
        sol = 1;
    if (add < 0 || ( s1[i] == '\0' && s2[i] != '\0'))
        sol = -1;
    if (add == 0 && ( s1[i] == '\0' && s2[i] == '\0'))
        sol = 0;
    return (sol);
}
