NAME = ft_display_file

SRC = main.c

BIN_FOLDER = ./bin/

OBJ = $(addprefix $(BIN_FOLDER),$(SRC:.c=.o))

all: bin $(NAME)

bin:
	@mkdir bin

$(NAME): $(OBJ)
	@gcc -o $@ $<

$(BIN_FOLDER)%.o :srcs/%.c
	@gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -rf $(BIN_FOLDER)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

