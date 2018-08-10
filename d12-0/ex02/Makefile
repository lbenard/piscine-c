# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/19 11:58:48 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_tail
SRC			=	srcs/ft_arg.c	\
				srcs/ft_char.c	\
				srcs/ft_file.c	\
				srcs/ft_math.c	\
				srcs/ft_put.c	\
				srcs/ft_str.c	\
				srcs/ft_tail.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	srcs/
INCLUDES	=	includes/
FLAGS		=	-Wall -Werror -Wextra

all: norm $(NAME)

$(NAME): compile link

norm:
	@echo "Norminette:"
	@norminette | grep -B1 -E "Error|Warning"
	@echo

compile: $(OBJ)

%.o: %.c
	@echo "Compiling $< into $@..."
	@gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

link:
	@echo "Linking $(OBJ)..."
	@gcc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "Cleaning $(OBJ)..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -rf $(NAME)

re: fclean all
