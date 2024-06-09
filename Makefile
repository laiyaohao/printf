# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 14:02:37 by ylai              #+#    #+#              #
#    Updated: 2024/06/08 14:33:55 by ylai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_printf.c
OBJS := 

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

all: ${NAME}

clean:
	rm %.o

fclean:
	clean
	rm ${NAME}