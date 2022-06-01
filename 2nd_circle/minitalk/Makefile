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

NAME		= minitalk.a

SRCS		= server.c client.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc
RM 			= rm -f
CFLAGS		= -Wall -Werror -Wextra 
AR			= ar rcs

all: $(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM)	$(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re