/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copy n char
*/

char *my_strncpy(char *dest, const char *src, const int n)
{
    int i = 0;

    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    for (; i <= n; i++)
        dest[i] = '\0';
    return (dest);
}
