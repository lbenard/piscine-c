# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/22 23:39:29 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	colle-2
SRC			=	srcs/colle.c		\
				srcs/colle_check.c	\
				srcs/ft_atoi.c		\
				srcs/ft_itoa.c		\
				srcs/ft_putchar.c	\
				srcs/ft_putnbr.c	\
				srcs/ft_putstr.c	\
				srcs/ft_realloc.c	\
				srcs/ft_strcmp.c	\
				srcs/ft_strlen.c	\
				srcs/ft_strncat.c	\
				srcs/ft_strncpy.c	\
				srcs/ft_swap.c		\
				srcs/ft_utils.c		\
				srcs/main.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	srcs/
INCLUDES	=	includes/
FLAGS		=	-Wall -Wextra -Werror

all: norm $(NAME)

$(NAME): compile link

norm:
	@echo "Norminette:"
	@norminette | grep -B1 -E "Error|Warning"
	@echo

compile: $(OBJ)

%.o: %.c
	@echo "Compiling $< into $@..."
	@cc $(FLAGS) -I $(INCLUDES) -c $< -o $@

link:
	@echo "Linking $(OBJ)..."
	@gcc $(FLAGS) -I $(INCLUDES) -o $(NAME) $(OBJ)

test: $(NAME)
	@echo "Test with a 100-100 square-rectangle"
	./rush00 100 100 | ./colle-2
	./rush01 100 100 | ./colle-2
	./rush02 100 100 | ./colle-2
	./rush03 100 100 | ./colle-2
	./rush04 100 100 | ./colle-2
	@echo "Test with a 100-1000 rectangle"
	./rush00 100 1000 | ./colle-2
	./rush01 100 1000 | ./colle-2
	./rush02 100 1000 | ./colle-2
	./rush03 100 1000 | ./colle-2
	./rush04 100 1000 | ./colle-2
	@echo "Test with a 1-1 square-rectangle"
	./rush00 1 1 | ./colle-2
	./rush01 1 1 | ./colle-2
	./rush02 1 1 | ./colle-2
	./rush03 1 1 | ./colle-2
	./rush04 1 1 | ./colle-2
	@echo "Test with invert rectangle"
	cat invert_rectangle | ./colle-2
	@echo "Test with invert square-rectangle"
	cat invert_square_rectangle | ./colle-2

clean:
	@echo "Cleaning $(OBJ)..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all
