/*
** EPITECH PROJECT, 2022
** my_get_file.c
** File description:
** get file into string
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *my_get_file(const char *path)
{
    FILE *fd;
    size_t len;
    char *line = NULL;
    char *tmp = NULL;
    char *buffer = NULL;

    if (!(fd = fopen(path, "r")))
        return (NULL);
    while (getline(&line, &len, fd) != - 1) {
        tmp = buffer;
        buffer = (!buffer) ? my_strdup(line) : my_strcat(buffer, line);
        free(tmp);
    }
    free(line);
    if (fclose(fd) == EOF)
        return (NULL);
    return (buffer);
}
