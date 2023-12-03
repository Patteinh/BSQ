/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** str is num
*/

int my_char_isnum(const char c)
{
    if (c >= 48 && c <= 57)
        return (0);
    return (1);
}
