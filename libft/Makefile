# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 13:34:59 by cedmulle          #+#    #+#              #
#    Updated: 2023/10/05 14:56:55 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(wildcard ft_*.c)
SRCMAN		:= $(filter-out ft_lst%, $(SRCS))
SRCALL		= $(SRCS)
CFLAGS		= -Wall -Werror -Wextra
HEAD		= libft.h
CC			= cc
NAME		= libft.a

%.o:		%.c
	@$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

all:		$(NAME)

$(NAME):	$(SRCMAN:.c=.o)
	@ar -rcs $(NAME) $^

bonus:		$(SRCALL:.c=.o)
	@ar -rcs $(NAME) $^

clean:
	@rm -f *.o

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
