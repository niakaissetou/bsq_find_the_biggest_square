##
## EPITECH PROJECT, 2022
## makefile
## File description:
## filemake
##

CC = gcc

SRC     =	src/open_read_file.c	\
		src/calcul.c	\
		src/algorithm.c	\
		src/compteur.c	\
		src/main.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/my_put_nbr.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =       bsq

CPPFLAGS = -I./includes/

CFLAGS = -g3

all:$(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
