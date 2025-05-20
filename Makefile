# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 18:43:41 by clouden           #+#    #+#              #
#    Updated: 2025/05/15 19:40:57 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Name of the output static library
NAME    = libft.a

# Source and object files
SRCS    = $(wildcard *.c)
OBJS    = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Rule to build the library from object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
