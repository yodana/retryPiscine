NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c

HEADER = includes/

BIN_FOLDER = ./bin/

OBJ = $(addprefix $(BIN_FOLDER),$(SRC:.c=.o))

all: bin $(NAME)

bin:
	mkdir bin

$(NAME):  $(OBJ)
	ar r $(NAME) $(OBJ)

$(BIN_FOLDER)%.o :srcs/%.c
	gcc $< -c -I $(HEADER) -o $@ -Wall -Wextra -Werror

clean: 
	rm $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
