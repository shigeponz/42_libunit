# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshigemu <hshigemu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 08:25:10 by mhorie            #+#    #+#              #
#    Updated: 2021/05/11 21:46:28 by hshigemu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tests.out

SRCS		=	main.c $(wildcard */*.c)

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

INCLUDE		=	-I ../framework/includes

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ../framework
	$(CC) $(CFLAGS) $(INCLUDE) -L ../framework -lunit -o $(NAME) $(OBJS)

test:	$(NAME)
	./$(NAME)

clean:
	$(MAKE) clean -C ../framework
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ../framework
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
