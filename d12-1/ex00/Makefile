# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/19 14:43:26 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
SRC			=	srcs/main.c
OBJ			=	$(SRC:.c=.o)
SRC_FOLDER	=	srcs/
INCLUDES	=	includes/
FLAGS		=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): compile link

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
