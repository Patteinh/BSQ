/*
** EPITECH PROJECT, 2021
** get_info.c
** File description:
** get_info.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "bsq.h"

int get_lines(bsq_t *map)
{
    map->n_lines = 0;
    int i;

    for (i = 0; map->buffer[i]; i++)
        if (map->buffer[i] == '\n')
            map->n_lines++;
    map->n_lines -= 1;
    if (map->n_lines < 0)
        return (-1);
    return (SUCCESS);
}

void get_columns(bsq_t *map)
{
    map->n_columns = 0;
    int i = 0;

    for (i = 0; map->buffer[i] != '\n'; i++);
    i++;
    for (i = i; map->buffer[i] != '\n'; i++)
        map->n_columns++;
}

int get_only_map(bsq_t *map)
{
    map->only_map = NULL;
    int i = 0;
    char *lines = NULL;
    int check_lines = 0;

    for (; map->buffer[i] != '\n'; i++);
    i++;
    lines = my_strndup(map->buffer, i - 1);
    check_lines = my_getnbr(lines);
    if (check_lines != map->n_lines) {
        free(lines);
        return (84);
    }
    free(lines);
    map->only_map = my_strdup(map->buffer + i);
    return (SUCCESS);
}
