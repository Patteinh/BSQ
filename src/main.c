/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "bsq.h"

int main(int ac, char **av)
{
    bsq_t map;

    if (ac == 2)
        return (bsq(av[1], &map));
}
