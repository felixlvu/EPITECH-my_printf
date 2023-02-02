##
## EPITECH PROJECT, 2022
## cpoolday10
## File description:
## makefile
##

SRC =	flag_base.c\
		flag_scientific.c\
		lib.c\
		my_base.c\
		my_put_float.c\
		nbr_spec.c\
		pointer.c\
		print_c.c\
		print_scientific.c\
		printf_nbr.c\
		printf.c\
		unprintable_char.c\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
