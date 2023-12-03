/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** bsq.h
*/

#include "my.h"

#ifndef _BSQ_H
    #define _BSQ_H

typedef struct bsq_s {
    char **array_char;
    int **array_nb;
    int n_columns;
    int n_lines;
    char *buffer;
    char *only_map;
    int size;
    int fd;
}bsq_t;

typedef struct number_s {
    int nb_max;
    int line;
    int col;
}number_t;

int bsq(char const *file, bsq_t *map);
int get_lines(bsq_t *map);
void get_columns(bsq_t *map);
void find_square(bsq_t *map);
int **place_numbers_for_algo(bsq_t *map);
int find_biggest_number(bsq_t *map, number_t *nb);
int get_col(bsq_t *map, int nb);
int get_line(bsq_t *map, int nb);
int get_only_map(bsq_t *map);

#endif
