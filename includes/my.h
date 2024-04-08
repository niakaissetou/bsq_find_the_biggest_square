/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** task02
*/

    #ifndef MY_H_
        #define MY_H_
        #include "struct.h"
        #include "unistd.h"
var_t *initialisation(var_t *pos);
void square(char **tab, char *buffer, var_t value);
char **print_x(char *filepath, char *buffer, var_t *pos);
void final_map(char **tab, var_t *pos, char *buffer);
int find_max(int **tab, int max, char *buffer, var_t *pos);
var_t *plus_one_min(int **tab, int i, int j);
int algo(int **tabint, int i, int j);
int my_strlen(char const *str);
int count_int(char *buffer);
int number_column(char *buffer);
int number_line(char *buffer);
int **malloc_nb_line_column(char *filepath);
int replace_a_point(char *src);
int **replace_by_value(char *filepath);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
char *print_first_line(char *filepath);
int my_putstr(char const *str);
    #endif
