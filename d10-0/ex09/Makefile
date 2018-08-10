# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/13 00:53:03 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op
SRC			=	srcs/do_op.c		\
				srcs/ft_atoi.c		\
				srcs/ft_putchar.c	\
				srcs/ft_putnbr.c	\
				srcs/ft_putstr.c	\
				srcs/ft_strlen.c	\
				srcs/main.c			\
				srcs/operators.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	srcs/
INCLUDES	=	includes/

all: $(NAME)

$(NAME): compile link

compile: $(OBJ)

%.o: %.c
	@echo "Compiling $< into $@..."
	@gcc -I $(INCLUDES) -c $< -o $@

link:
	@echo "Linking $(OBJ)..."
	@gcc -o $(NAME) $(OBJ)

clean:
	@echo "Cleaning $(OBJ)..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all
