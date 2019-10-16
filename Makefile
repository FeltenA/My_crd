##
## ETNA PROJECT, 04/10/2019 by felten_a
## [...]
## File description:
##      [...]
##

CC		=	gcc $(FLAGS)
FLAGS	=	-Wall -Wextra -Werror -std=c11
NAME	=	my_crd
SRC		=	./main/main.c					\
			./main/commands.c
DIR		=	./lib/my
SRCLIB	=	$(DIR)/my_putchar.c				\
			$(DIR)/my_putstr.c				\
			$(DIR)/my_strlen.c				\
			$(DIR)/my_getnbr.c				\
			$(DIR)/my_putnbr.c				\
			$(DIR)/my_isneg.c				\
			$(DIR)/my_swap.c				\
			$(DIR)/my_strcpy.c				\
			$(DIR)/my_strncpy.c				\
			$(DIR)/my_strcmp.c				\
			$(DIR)/my_strncmp.c				\
			$(DIR)/my_strcat.c				\
			$(DIR)/my_strncat.c				\
			$(DIR)/my_strstr.c				\
			$(DIR)/my_strdup.c				\
			$(DIR)/my_readline.c			\
			$(DIR)/my_str_to_word_array.c
OBJLIB	=	$(SRCLIB:%.c=%.o)
OBJ		=	$(SRC:%.c=%.o)
LIB		=	./lib/my/libmy.a
CLIB	=	./lib/libmy.a
H		=	my.h
RM		=	rm -f
CP		=	cp

$(NAME):	$(OBJ) $(OBJLIB)
			ar r $(LIB) $(OBJLIB)
			ranlib $(LIB)
			$(CP) $(LIB) ./lib
			$(CC) $(OBJ) -L./lib -lmy -o $(NAME)
all:		$(NAME)
clean:
			$(RM) $(OBJ)
			$(RM) $(OBJLIB)
fclean:				clean
			$(RM) $(LIB)
			$(RM) ./lib/libmy.a
			$(RM) $(NAME)
re:			fclean all
