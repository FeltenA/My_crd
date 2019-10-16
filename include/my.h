/*
** ETNA PROJECT, 04/10/2019 by felten_a
** my.h
** File description:
**      [...]
*/

#ifndef __MY_H__
# define __MY_H__

void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(const char *str);
int my_getnbr(const char *str);
void my_putnbr(int nb);
void my_isneg(int nb);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, int n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int nb);
char *my_strstr(char *str, const char *to_find);
char *my_strdup(const char *src);
char *my_readline(void);
char **my_str_to_word_array(const char *str);

#endif
