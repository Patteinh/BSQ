##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-I ./include/ -W -Wall -Wextra

OBJ			=	$(SRC:.c=.o)

SRC    =	my_putchar.c		\
			my_putstr.c			\
			my_strlen.c			\
			my_putnbr.c			\
			my_strcmp.c			\
			my_strdup.c			\
			my_getnbr.c			\
			my_str_to_array.c	\
			my_char_isnum.c		\
			my_get_file.c		\
			my_strcmp.c			\
			my_strcat.c			\
			my_array_to_tab.c	\
			my_arraylen.c		\
			my_parray.c			\
			my_strndup.c		\
			my_strncpy.c		\
			my_free_array.c		\
			my_strcpy.c			\

all :	$(NAME)
$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean :	clean
	@$(RM) $(NAME)

re :	fclean all

.PHONY:	all clean fclean re
