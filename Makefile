##
## EPITECH PROJECT, 2023
## B-MUL-100-NCY-1-1-myradar-jonathan.lotz
## File description:
## Makefile
##

SRC		=			$(wildcard *.c)

OBJ 	=			$(SRC:.c=.o)

NAME 	=			task1

LIBFLAG +=  -lm -I include -l csfml-graphics -l csfml-system -l csfml-window \
			-l csfml-audio

all: $(NAME)

$(NAME):			$(OBJ)
		gcc -g $(SRC) -o $(NAME) $(LIBFLAG)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all