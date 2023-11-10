# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 18:28:34 by tebandam          #+#    #+#              #
#    Updated: 2023/11/10 11:16:39 by tebandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS=ft_print_hexa_lowercase.c ft_print_hexa_uppercase.c ft_printf.c \
     ft_putchar.c ft_putstr.c ft_putnbr.c print_ptr_hexa.c \

OBJS=$(SRCS:.c=.o)

RM=rm -f

CC= cc
ARRC=ar -rc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	$(ARRC) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
