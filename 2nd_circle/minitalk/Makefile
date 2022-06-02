# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 16:46:33 by gade-alm          #+#    #+#              #
#    Updated: 2022/06/01 16:51:18 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= server.c client.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM 			= rm -f
AR			= ar rcs

all: server client

server: server.o
	$(CC) -o server
	
client: client.o
	$(CC) -o client

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) server client

re:			fclean all

.PHONY:		all clean fclean re
