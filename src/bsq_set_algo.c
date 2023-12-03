/*
** EPITECH PROJECT, 2021
** bsq_set_algo
** File description:
** bsq_set_algo
*/

#include "bsq.h"

static char **inverted_minesweeper_two(bsq_t *map, number_t *nb)
{
    find_biggest_number(map, nb);
    nb->line = get_line(map, nb->nb_max);
    nb->col = get_col(map, nb->nb_max);

    for (int i = nb->line - (nb->nb_max - 1); i <= nb->line; i++) {
        for (int j = nb->col - (nb->nb_max - 1); j <= nb->col; j++)
            map->array_char[i][j] = 'x';
    }
    return (map->array_char);
}

void find_square(bsq_t *map)
{
    number_t nb;
    map->array_nb = array_to_int_tab(map->array_char);

    place_numbers_for_algo(map);
    inverted_minesweeper_two(map, &nb);
    for (int i = 0; i != map->n_lines; i++)
        my_putstr(map->array_char[i]);
}
