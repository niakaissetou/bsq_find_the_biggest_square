/*
** EPITECH PROJECT, 2022
** read_file
** File description:
** strcpy_file
*/
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "struct.h"
#include <stdio.h>

int replace_char_by_value(char c)
{
    if (c == '.') {
        return 1;
    }
    if (c == 'o') {
        return 0;
    }
}

int **create_tab(char *buffer)
{
    int **tab;
    var_t *pos;
    int i = 0; int y = 0;
    int a = count_int(buffer);
    int nb_lines = number_line(buffer);

    tab = malloc(sizeof(int *) * (nb_lines + 1));
    for (; i < nb_lines; i++) {
        tab[i] = malloc(sizeof(int) * (number_column(buffer) + 1));
        for (; y < number_column(buffer); y++) {
            tab[i][y] = replace_char_by_value(buffer[a]);
            a++;
        }
        y = 0;
        a++;
    }
    return tab;
}

char **print_x(char *filepath, char *buffer, var_t *pos)
{
    int **tabint = create_tab(buffer);
    char **tab; int y = 0; int i = 0; int t = 0;
    int a = count_int(buffer); int max = 0;
    int nb_lines = number_line(buffer);

    tab = malloc(sizeof(int *) * (nb_lines + 1));
    for (i = 0; i < nb_lines; i++) {
        tab[i] = malloc(sizeof(int) * (number_column(buffer)));
        tab[i][number_column(buffer)] = '\0';
    }
    tab[i] = NULL;
    for (; t < nb_lines; t++) {
        for (; y <= number_column(buffer) - 1; y++) {
            tab[t][y] = buffer[a];
            algo(tabint, t, y);
            find_max(tabint, max, buffer, pos);
            a++;
        }
        y = 0; a++;
    } return tab;
}

void final_map(char **tab, var_t *pos, char *buffer)
{
    for (int i = pos->one; i > pos->one - pos->maximum; i--) {
        for (int j = pos->two; j > pos->two - pos->maximum; j--) {
            tab[i][j] = 'x';
        }
    }
    for (int x = 0; tab[x] != NULL; x++) {
        my_putstr(tab[x]);
        my_putchar('\n');
    }
}

char *print_first_line(char *filepath)
{
    int fd; int rd; struct stat st; char *buffer;
    fd = open(filepath, O_RDONLY); stat(filepath, &st);
    buffer = malloc(sizeof(char *) * st.st_size);
    rd = read(fd, buffer, st.st_size); buffer[rd] = '\0';
    int a = count_int(buffer); int nb_lines = number_line(buffer);
    int **tab = create_tab(buffer);

    for (int i = 0; i < nb_lines; i++) {
        for (int y = 0; y < number_column(buffer); y++) {
            a++;
        }
        a++;
    }
    close (fd); free(buffer); return buffer;
}
