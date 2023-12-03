/*
** EPITECH PROJECT, 2022
** my_strlen_array
** File description:
** count line in array
*/

#include <stddef.h>

int my_arraylen(char **array)
{
    size_t len = 0;

    while (array[++len]);
    return (len);
}
