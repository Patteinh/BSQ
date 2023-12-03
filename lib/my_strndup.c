/*
** EPITECH PROJECT, 2022
** my_strndup.c
** File description:
** my_strndup
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(const char *str, const int n)
{
    char *new = malloc(sizeof(char) * (n + 1));

    new = my_strncpy(new, str, n);
    return (new);
}
