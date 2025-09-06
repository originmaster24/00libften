NAME = libft.a
CCFLAGS = -Wextra -Werror -Wall
INCLUDE = -I.
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
#BONUS := $(wildcard *_bonus.c)
#BONUS_OBJ :=$(BONUS:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
#	@echo $(SRC)

%.o : %.c
	cc $(FLAGS) $(INCLUDE) -c $< -o $@

#bonus: $(NAME)

#$(BONUS) : $(BONUS_OBJ)
#	ar rcs $(BONUS) $(BONUS_OBJ)

#%.o : %.c
#	cc $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re