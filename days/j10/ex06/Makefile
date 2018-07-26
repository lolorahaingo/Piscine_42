SRC = main.c ft_atoi.c ft_strcmp.c ft_putnbr.c is_correct.c operation_list.c ft_putchar.c ft_putstr.c ft_strlen.c ft_calculate.c
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
	@$(RM) -f $(NAME)
