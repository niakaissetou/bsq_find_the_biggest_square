/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** putstr
*/
#include "unistd.h"

void my_putchar(char c);

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
        }
    return count;
}

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}
