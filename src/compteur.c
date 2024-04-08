/*
** EPITECH PROJECT, 2022
** compteur_suite
** File description:
** suite_compteur
*/
#include <stddef.h>

int count_int(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n') {
        i++;
    }
    return i + 1;
}

int number_column(char *buffer)
{
    int counter = 0;

    for (int i = count_int(buffer) ; buffer[i] != '\n'; i++) {
        counter += 1;
    }
    return counter;
}

int number_line(char *buffer)
{
    int count = 0;

    for (int i = 0; buffer[i] != '\0'; i++){
        if (buffer[i] == '\n'){
            count += 1;
        }
    }
    return count - 1;
}
