# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 17:42:06 by fomanca           #+#    #+#              #
#    Updated: 2025/10/08 18:48:12 by fomanca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRCS = srcs/ft_error.c \
	   srcs/ft_print_file.c \
	   srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/main.c

OBJS = $(SRCS:.c=.o)

INCLUDES = -Iincludes

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) ${INCLUDES} -o $@ $^
	chmod +x $(NAME)

%.o: %.c includes/header.h
	$(CC) $(CFLAGS) ${INCLUDES} -c $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
