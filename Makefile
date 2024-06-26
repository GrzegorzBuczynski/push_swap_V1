# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 23:16:05 by gbuczyns          #+#    #+#              #
#    Updated: 2024/06/04 20:09:51 by gbuczyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Include directories
INC = -Iinc
INCLUDELIBFT = -Ilibft

# Source files
SRCS = src/errors_handle.c \
       src/inti_nodes_a.c \
       src/inti_nodes_b.c \
       src/intial_condition_utils.c \
       src/main.c \
       src/push_swap.c \
       src/push.c \
       src/reverse_rotate.c \
       src/rotate.c \
       src/sort_stacks.c \
       src/stack_init_utilis.c \
       src/stack_init.c \
       src/swap.c \
       src/three_list_sort.c

# Object files
OBJ = $(SRCS:%.c=%.o)

# Executable name
NAME = push_swap

MY_LIBFT = ./libft/libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f

# Default target
all: $(NAME)

# Rule for building object files
%.o: %.c
	@echo "Compiling $< with includes: $(INC) $(INCLUDELIBFT)"
	$(CC) $(CFLAGS) $(INC) $(INCLUDELIBFT) -c $< -o $@

# Rule for building the executable
$(NAME): $(OBJ) $(MY_LIBFT)
	$(CC) $(CFLAGS) $(INC) $(INCLUDELIBFT) -o $(NAME) $(OBJ) -Llibft -lft

# Rule for building the libft library
$(MY_LIBFT):
	make -C libft

# Clean object files
clean:
	make clean -C libft
	$(RM) $(OBJ)

# Clean object files and executable
fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re libft
