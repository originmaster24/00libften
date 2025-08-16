NAME = libft.a
CCFLAGS = -Wextra -Werror -Wall
INCLUDE = -I.
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo $(SRC)

%.o : %.c
	cc $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

