NAME = libftprintf.a

CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
INCLUDE = include
RM = rm -f
SRC = 	src/ft_str.c \
		src/parse_arg.c \
		src/printvalue.c \
		src/ft_printf.c

OBJ = $(SRC:.c=.o)

all: lib_build $(NAME)

lib_build:
	$(MAKE) -C libft

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft

re: fclean all

.PHONY: all clean fclean re