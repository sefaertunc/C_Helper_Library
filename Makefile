# Makefile for libch.a
# --------------------
# - Compiles all .c files under sources/*/ into build/ directory as .o files
# - Automatically creates subdirectories in build/ as needed
# - Produces a static library named libch.a from the compiled objects
# - Use: make, make clean, make fclean, make re


CCF     = cc -Wall -Wextra -Werror
NAME    = libch.a

SRC     := $(wildcard sources/*/*.c)
OBJ_DIR := build
OBJ     := $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CCF) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
