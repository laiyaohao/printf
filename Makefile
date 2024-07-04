# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 14:02:37 by ylai              #+#    #+#              #
#    Updated: 2024/07/04 21:16:28 by ylai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_printf.c 
OBJS := ${SRCS:.c=.o}

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

${NAME}: ${OBJS}
	ar rcs $@ $^

all: ${NAME}

clean:
	rm -f %.o

fclean: clean
	rm -f ${NAME}