# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gade-alm <gade-alm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 16:46:33 by gade-alm          #+#    #+#              #
#    Updated: 2022/06/02 16:00:20 by gade-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra 
RM 			= rm -f
AR			= ar rcs

all: 
	gcc -Wall -Wextra -Werror server.c -o server
	gcc -Wall -Wextra -Werror client.c -o client

clean:
			$(RM) server client

fclean:		clean
			$(RM) server client

re:			fclean all

.PHONY:		all clean fclean re
