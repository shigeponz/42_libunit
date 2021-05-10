# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 07:19:53 by mhorie            #+#    #+#              #
#    Updated: 2021/05/10 22:06:59 by hshigemu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libunit.a

SRCS		=	launch.c utils.c print.c load_run.c free.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

INCLUDE		=	-I ./includes

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
