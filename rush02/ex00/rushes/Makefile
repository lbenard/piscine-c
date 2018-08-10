# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 12:36:51 by lbenard           #+#    #+#              #
#    Updated: 2018/07/22 22:55:12 by lbenard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	=	-Wall -Wextra -Werror

all: norm $(NAME)

$(NAME): compile

norm:
	@echo "Norminette:"
	@norminette -R CheckForbiddenSourceHeader | grep -B1 -E "Error|Warning"
	@echo

compile:
	@echo "Compile rush00..."
	@gcc $(FLAGS) main.c ft_atoi.c ft_putchar.c rush00.c -o ../rush00
	@echo "Compile rush01..."
	@gcc $(FLAGS) main.c ft_atoi.c ft_putchar.c rush01.c -o ../rush01
	@echo "Compile rush02..."
	@gcc $(FLAGS) main.c ft_atoi.c ft_putchar.c rush02.c -o ../rush02
	@echo "Compile rush03..."
	@gcc $(FLAGS) main.c ft_atoi.c ft_putchar.c rush03.c -o ../rush03
	@echo "Compile rush04..."
	@gcc $(FLAGS) main.c ft_atoi.c ft_putchar.c rush04.c -o ../rush04

clean:
	@echo "Nothing to clear..."

fclean: clean
	@echo "Removing rushes..."
	@rm -rf ../rush00 ../rush01 ../rush02 ../rush03 ../rush04

re: fclean all
