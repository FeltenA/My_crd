/*
** ETNA PROJECT, 04/10/2019 by felten_a
** [...]
** File description:
**      [...]
*/

int check_len_num(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] <= 57 && str[i] >= 48) {
        ++i;
    }
    return (i);
}

int char_to_num(char a)
{
    int b;
    char c;

    c = 48;
    for (b = 0; b <= 9; ++b) {
        if (a == c) {
            return (b);
        }
        ++c;
    }
    return (0);
}

int factorial_ten(int *len, char c)
{
    int num;
    int i;
    int diz;

    num = char_to_num(c);
    diz = 1;
    for (i = 1; i < *len; ++i) {
        diz *= 10;
    }
    num = diz * num;
    --*len;
    return (num);
}

int my_getnbr(const char *str)
{
    int i = 0;
    int count;
    int min = 0;
    int len;
    int num = 0;

    while (str[i] != '\0' && (str[i] < 48 || str[i] > 57)) {
        if (str[i] == '-')
            ++min;
        if ((str[i] < 48 || str[i] > 57) && str[i] != '+' && str[i] != '-')
            return (0);
        ++i;
    }
    len = check_len_num(&str[i]);
    count = len + i;
    for (; i < count; ++i) {
        num += factorial_ten(&len, str[i]);
    }
    if ((min % 2) == 1)
        num *= -1;
    return (num);
}
