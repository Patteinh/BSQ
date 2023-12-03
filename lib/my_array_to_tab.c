/*
** EPITECH PROJECT, 2022
** my_array_to_tab.c
** File description:
** char array to int array
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

static int len_w(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}

int **array_to_int_tab(char **array)
{
    int height = my_arraylen(array);
    int **tab = malloc(sizeof(int *) * (height));
    int j = 0;

    if (!array || height == 0) {
        free(tab);
        return (NULL);
    }
    for (int i = 0; array[i]; i++, j = 0) {
        tab[i] = malloc(sizeof(int) * (len_w(array[i])));
        for (; array[i][j]; j++)
            tab[i][j] = array[i][j] == '.' ? 1 : 0;
    }
    return (tab);
}
