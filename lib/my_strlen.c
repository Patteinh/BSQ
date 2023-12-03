/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** count char in string
*/

#include <stddef.h>

int my_strlen(const char *str)
{
    size_t len = 0;

    while (str[++len]);
    return (len);
}
