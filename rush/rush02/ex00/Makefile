# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loloria <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 19:00:05 by loloria           #+#    #+#              #
#    Updated: 2018/07/22 23:40:50 by kplatret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) read.c is_colle.c create_tab.c -o $(NAME)
	@$(CC) $(CFLAGS) test_colle/colle00.c main.c test_colle/ft_putchar.c -o colle-00
	@$(CC) $(CFLAGS) test_colle/colle01.c main.c test_colle/ft_putchar.c -o colle-01
	@$(CC) $(CFLAGS) test_colle/colle02.c main.c test_colle/ft_putchar.c -o colle-02
	@$(CC) $(CFLAGS) test_colle/colle03.c main.c test_colle/ft_putchar.c -o colle-03
	@$(CC) $(CFLAGS) test_colle/colle04.c main.c test_colle/ft_putchar.c -o colle-04

clean:
	@rm -f colle-00 colle-01 colle-02 colle-03 colle-04

fclean: clean
	@rm -f $(NAME)

re : fclean all
