/*
** EPITECH PROJECT, 2021
** bsq_principal
** File description:
** bsq_principal
*/

#include <stddef.h>
#include <stdlib.h>
#include "bsq.h"

static int bsq_set_algo(bsq_t *map)
{
    if (get_lines(map))
        return (ERROR);
    get_columns(map);
    if (get_only_map(map))
        return (ERROR);
    map->array_char = my_str_to_array(map->only_map, "\n");
    find_square(map);
    return (SUCCESS);
}

static int check_map(bsq_t *map)
{
    int i = 0;

    if (map->buffer == NULL || map->buffer[0] == '\0' || map->buffer[0] == '\n')
        return (ERROR);
    for (; map->buffer[i] != '\0'; i++) {
        if (map->buffer[i] == '.' || map->buffer[i] == 'o'
        || map->buffer[i] == '\n' || !my_char_isnum(map->buffer[i]))
            continue;
        return (ERROR);
    }
    return (SUCCESS);
}

static void free_all(bsq_t *map)
{
    free(map->buffer);
    free(map->only_map);
    for (int i = 0; i != map->n_lines; i++)
        free(map->array_nb[i]);
    free(map->array_nb);
    my_free_array(map->array_char);
}

int bsq(char const *file, bsq_t *map)
{
    map->size = 0;
    int count = 0;
    int i = 0;

    map->buffer = my_get_file(file);
    for (; map->buffer[i]; i++)
        if (!my_char_isnum(map->buffer[i]))
            count++;
    map->size = i - count;
    if (check_map(map) || bsq_set_algo(map)) {
        free_all(map);
        return (ERROR);
    }
    free_all(map);
    return (SUCCESS);
}
