/*
** EPITECH PROJECT, 2022
** le_main
** File description:
** le_vrai_main
*/
#include "my.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int my_str_len(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *open_file(char *filepath)
{
    struct stat st;
    int fd, rd;
    char *buf;
    stat(filepath, &st);
    buf = malloc(sizeof(char *) * st.st_size);
    fd = open(filepath, O_RDONLY);
    rd = read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    return buf;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return 84;
    char *buffer = open_file(av[1]);
    if (my_str_len(buffer) == 0) return 84;
    var_t *pos = malloc(sizeof(var_t));
    char **tab = print_x(av[1], buffer, pos);
    final_map(tab, pos, buffer);
    return 0;
}
