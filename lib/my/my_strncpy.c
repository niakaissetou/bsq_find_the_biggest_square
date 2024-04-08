/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** Day06
*/
char *my_strncpy(char *dest, char const *src, int n)

{
    int i = 0;

    while (src[i] != '\0' && n > i){
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
