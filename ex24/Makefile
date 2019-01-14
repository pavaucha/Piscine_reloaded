# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:42:19 by pavaucha          #+#    #+#              #
#    Updated: 2017/11/07 14:42:21 by pavaucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c \

SRC2 = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o \

INC = includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(INC)
	ar rc $(NAME) $(SRC2)
clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f libft.a

re: fclean all
