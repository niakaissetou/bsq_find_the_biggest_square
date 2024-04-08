/*
** EPITECH PROJECT, 2022
** dislpay_stdargs
** File description:
** partc_bs
*/

#include <string.h>
#include <stdio.h>
#include <stdarg.h>

int my_put_nbr(int nbr);
int my_putstr(char const *str);
void my_putchar(char c);

void disp_stdarg(char *s, ...)
{
    va_list list;
    int i = 0;

    va_start(list, s);
    while (s[i] != '\0'){
        if (s[i] == 'c'){
            my_putchar(va_arg(list, int));
            my_putchar('\n');
        }
        if (s[i] == 'i'){
            my_put_nbr(va_arg(list, int));
            my_putchar('\n');
        }
        if ( s[i] == 's'){
            my_putstr(va_arg(list, char*));
            my_putchar('\n');
        }
        i++;
    }
        va_end(list);
}
