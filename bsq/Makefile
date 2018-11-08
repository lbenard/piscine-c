# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/25 20:05:25 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bsq
SRC			=	srcs/board.c		\
				srcs/bsq.c			\
				srcs/flags.c		\
				srcs/ft_putstr.c	\
				srcs/ft_str.c		\
				srcs/ft_str2.c		\
				srcs/grid_check.c	\
				srcs/map_parsing.c	\
				srcs/struct.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	srcs/
INCLUDES	=	includes/
FLAGS		=	-Wall -Wextra -Werror

NORM_FILES	=	$(shell find . -name "*.c" -o -name "*.h")

all: norm $(NAME)

$(NAME): $(OBJ)
	@echo "\033[34m   Linking: \033[0m$(OBJ)...\033[0m"
	@gcc -o $(NAME) $(OBJ) $(FLAGS)

norm:
	@printf "\033[34mNorminette:\033[31m "
	@if ! norminette $(NORM_FILES) | grep -sB1 -E "Error|Warning"; then echo "\033[32mEvery file is following the norm"; fi

%.o: %.c
	@echo "\033[34m Compiling: \033[0m$<...\n\033[34m      into: \033[0m$@...\033[0m"
	@gcc -I $(INCLUDES) -c $< -o $@ $(FLAGS)

clean:
	@echo "\033[34m  Cleaning: \033[0m$(OBJ)...\033[0m"
	@rm -rf $(OBJ)

fclean: clean
	@echo "\033[34m  Removing: \033[0m$(NAME)...\033[0m"
	@rm -rf $(NAME)

re: fclean all
