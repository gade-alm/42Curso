# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 16:46:33 by gade-alm          #+#    #+#              #
#    Updated: 2022/06/14 14:49:18 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER	 	= server.c

OBJSSERVER  = $(SERVER:.c=.o)

CLIENT		= client.c

OBJSCLIENT  = $(CLIENT:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra 
RM 			= rm -f
RMALL       = $(OBJSSERVER) $(OBJSCLIENT) server client

all:	server client

server: server.o
	$(CC) $(CFLAGS) server.o -o server

client: client.o
	$(CC) $(CFLAGS) client.o -o client

clean:
			$(RM) $(RMALL)

.PHONY:		all clean 
