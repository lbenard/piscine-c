# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/12 13:50:08 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft
LIBNAME		=	libft.a
SRC			=	srcs/ft_putchar.c	\
				srcs/ft_putstr.c	\
				srcs/ft_strcmp.c	\
				srcs/ft_strlen.c	\
				srcs/ft_swap.c
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
	@ar rcs $(LIBNAME) $(OBJ)

clean:
	@echo "Cleaning $(OBJ)..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "Removing $(LIBNAME)..."
	@rm -rf $(LIBNAME)

re: fclean all
