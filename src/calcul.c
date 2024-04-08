/*
** EPITECH PROJECT, 2022
** clacul
** File description:
** for_the_algo
*/
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

int find_max(int **tab, int max, char *buffer, var_t *pos)
{
    int lines = number_line(buffer);
    int cols = number_column(buffer);
    pos->maximum = 0;
    pos->one = 0;
    pos->two = 0;

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            if (tab[i][j] > max) {
                max = tab[i][j];
                pos->one = i;
                pos->two = j;
                pos->maximum = max;
            }
        }
    }
    return 0;
}
