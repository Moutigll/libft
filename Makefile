NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.


SRCS = ft/ft_isalpha.c ft/ft_isdigit.c ft/ft_isalnum.c ft/ft_isascii.c ft/ft_isprint.c \
       ft/ft_strlen.c ft/ft_memset.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
