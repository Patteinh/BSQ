/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef _MY_H
    #define _MY_H

void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(char const *str);
int my_putnbr(const int nb);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(const char *src);
char *my_strcpy(char *dest, const char *src);
int my_getnbr(char *nbr);
char **my_str_to_array(const char *str, const char *delim);
char *my_get_file(const char *path);
int my_char_isnum(const char c);
int my_strcmp(const char *s1, const char *s2);
char *my_strcat(const char *left, const char *right);
int **array_to_int_tab(char **array);
int my_arraylen(char **array);
void my_parray(char **array);
char *my_strndup(const char *str, const int n);
char *my_strncpy(char *dest, const char *src, const int n);
void my_free_array(char **array);

static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;

#endif
