SRC = ft_atoi.c ft_putnbr.c is_correct.c operation.c main.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_calculate.c
SRCS = $(addprefix ./srcs/, $(SRC))
HDR = includes
RM = /bin/rm
NAME = do-op
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS) -I $(HDR) -o $(NAME)

clean:
	@$(RM) $(NAME)
