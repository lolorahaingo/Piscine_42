SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRC:.c=.o)
SRCS = $(addprefix ./srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
HDR = includes
RM = /bin/rm
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HDR) 
	ar rc $(NAME) $(OBJS) 

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
