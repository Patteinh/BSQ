/*
** EPITECH PROJECT, 2021
** get_info_big_square
** File description:
** get_info_big_square
*/

#include "bsq.h"

int get_line(bsq_t *map, int nb)
{
    for (int i = 0; i != map->n_lines; i++)
        for (int j = 0; j != map->n_columns; j++)
            if (map->array_nb[i][j] == nb)
                return (i);
    return (SUCCESS);
}

int get_col(bsq_t *map, int nb)
{
    for (int i = 0; i != map->n_lines; i++)
        for (int j = 0; j != map->n_columns; j++)
            if (map->array_nb[i][j] == nb)
                return (j);
    return (SUCCESS);
}

int find_biggest_number(bsq_t *map, number_t *nb)
{
    nb->nb_max = 0;

    for (int i = 0; i != map->n_lines; i++)
        for (int j = 0; j != map->n_columns; j++)
            if (map->array_nb[i][j] > nb->nb_max)
                nb->nb_max = map->array_nb[i][j];
    return (nb->nb_max);
}
