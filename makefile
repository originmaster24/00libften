NAME = libft.a
CCFLAGS = -Wextra -Werror Wall
INCLUDE = -I.
SRC = $(ls *.c)
OBJ := $(SRC: *.c : *.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	cc $(FLAGS) $(INCLUDE) -o $@ -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all