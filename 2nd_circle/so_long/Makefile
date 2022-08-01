# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 16:54:55 by gade-alm          #+#    #+#              #
#    Updated: 2022/08/01 15:28:46 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= so_long.c

OBJS	= $(SRCS:.c=.o)

NAME	= so_long

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

%.o: %.c
	$(CC) $(CFLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): mlx_linux/mlx_Linux.a $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

all: $(NAME)	

mlx_linux/mlx_Linux.a:
	make -C mlx_linux

clean: 
	make clean -C mlx_linux

fclean: clean

re: fclean all

.PHONY: all clean fclean re