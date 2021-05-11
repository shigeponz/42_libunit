# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorie <mhorie@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 08:25:10 by mhorie            #+#    #+#              #
#    Updated: 2021/05/11 23:19:24 by mhorie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tests.out

SRCS		=	main.c $(wildcard */*.c) $(wildcard ../libft/*.c)

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
	$(CC) $(CFLAGS) $(INCLUDE) -L ../framework -o $(NAME) $(OBJS) -lunit

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
