# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 18:28:34 by tebandam          #+#    #+#              #
#    Updated: 2024/05/29 17:19:35 by tebandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS= src/utils/ft_putchar.c \
	src/utils/ft_putstr.c \
	src/utils/ft_putnbr.c \
	src/print_functions/print_ptr_hexa.c \
	src/print_functions/ft_print_hexa_lowercase.c \
	src/print_functions/ft_print_hexa_uppercase.c \
	ft_printf.c \

OBJS=$(SRCS:.c=.o)

RM=rm -f

CC= cc
ARRC=ar -rc
CFLAGS=-Wall -Wextra -Werror -Iincludes

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
