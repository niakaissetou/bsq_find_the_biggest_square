/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** day06
*/

void my_putchar(char c);
int my_strlen(char const *str);

int my_putnbr_base(long nbr, char const *base)

{
    int len = my_strlen(base);

    if (nbr >= 1) {
        my_putnbr_base(nbr / len, base);
    }
    if (nbr == 0) {
        return 0;
    }
    my_putchar(base[nbr % len]);
    return 0;
}
