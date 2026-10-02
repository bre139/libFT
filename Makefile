# Your Makefile must contain at least the rules $(NAME), all, clean, fclean and
# re.

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)