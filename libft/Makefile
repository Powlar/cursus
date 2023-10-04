# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 13:34:59 by cedmulle          #+#    #+#              #
#    Updated: 2023/10/03 19:52:47 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ft_*.c}
OBJS	= ${SRCS:.c=.o}
HEAD	= libft.h
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

.c.o:
	@${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	@ar -rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:	fclean	all
