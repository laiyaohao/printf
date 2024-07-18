# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 14:02:37 by ylai              #+#    #+#              #
#    Updated: 2024/07/18 20:37:44 by ylai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
# SRC_DIR := src
# CHECK_DIR := ${SRC_DIR}/checks/
# FLAG_DIR := ${SRC_DIR}/flags/
# UTIL_DIR := ${UTIL_DIR}/utils/

CHECK_FILES := ft_check_len ft_check_prec ft_check_type ft_check_width
FLAG_FILES := ft_put_apos ft_put_hash ft_put_minus ft_put_plus ft_put_space \
ft_put_zero
UTIL_FILES := ft_ispositive
# SRCS := $(addprefix $(CHECK_DIR), $(addsuffix .c, $(CHECK_FILES))) \
# $(addprefix $(FLAG_DIR), $(addsuffix .c, $(FLAG_FILES))) \
# $(addprefix $(UTIL_DIR), $(addsuffix .c, $(UTIL_FILES)))
SRCS := ft_abs.c ft_format.c ft_itoa.c ft_isnegative.c ft_normal.c ft_printf.c main.c
OBJS := ${SRCS:.c=.o}

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

${NAME}: ${OBJS}
	ar rcs $@ $^

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}