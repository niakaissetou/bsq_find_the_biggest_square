/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Day04
*/
int my_putchar(char c);
int my_putstr(char const *str)
{
    char arr[3];
    int t = 0;

    arr[0] = 'h';
    arr[1] = 'i';
    arr[2] = '\0';
    while ((arr[t]) != '\0'){
    my_putchar(arr[t]);
    t = t + 1;
}
    return 0;
}
