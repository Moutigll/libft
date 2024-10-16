CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

PART1_DIR = ft/part1
PART2_DIR = ft/part2
INCLUDE_DIR = include

PART1_SRCS = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c \
             ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c \
             ft_strlen.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_memcpy.c \
             ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalnum.c ft_isprint.c \
             ft_memmove.c ft_strlcat.c ft_strnstr.c

PART2_SRCS = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

PART1_OBJS = $(addprefix $(PART1_DIR)/, $(PART1_SRCS:.c=.o))
PART2_OBJS = $(addprefix $(PART2_DIR)/, $(PART2_SRCS:.c=.o))

OBJS = $(PART1_OBJS) $(PART2_OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(PART1_DIR)/%.o: $(PART1_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(PART2_DIR)/%.o: $(PART2_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
