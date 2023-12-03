/*
** EPITECH PROJECT, 2021
** bsq_algo
** File description:
** bsq_algo
*/

#include "bsq.h"

static int smallest_number(bsq_t *map, int i, int j)
{
    int left = map->array_nb[i][j - 1];
    int diag = map->array_nb[i - 1][j - 1];
    int top = map->array_nb[i - 1][j];

    if (left == diag && left == top && diag == top)
        return (left + 1);
    if (left <= diag && left <= top)
        return (left + 1);
    if (diag <= left && diag <= top)
        return (diag + 1);
    if (top <= left && top <= diag)
        return (top + 1);
    return (0);
}

int **place_numbers_for_algo(bsq_t *map)
{
    for (int i = 1; i != map->n_lines; i++)
        for (int j = 1; j != map->n_columns; j++) {
            map->array_nb[i][j] != 0 ?
            map->array_nb[i][j] = smallest_number(map, i, j) : 0;
        }
    return (map->array_nb);
}
