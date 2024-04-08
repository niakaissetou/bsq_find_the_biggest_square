/*
** EPITECH PROJECT, 2022
** get_nbrrrr
** File description:
** get_the_nbr
*/
#include "my.h"

int my_getnbr(char const *str)
{
    int neg = 0;
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            neg = 1;
        }
        if (str[i] <= '9' && str[i] >= '0') {
            nb = nb * 10;
            nb = nb + (str[i] - '0');
        }
    }
    if (neg == 1)
        return -nb;
    return nb;
}
