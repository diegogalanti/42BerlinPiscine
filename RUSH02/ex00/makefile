# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezakirov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 20:54:26 by ezakirov          #+#    #+#              #
#    Updated: 2022/09/04 20:54:28 by ezakirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS		= -Wall -Wextra -Werror

SRC			= handle_one.c handle_two.c handle_three.c rush-02.c biblioteca.c file_manager.c print.c handle_complex.c library.c clean.c utils.c utils2.c

NAME		= rush-02

CC			= cc
RM			= rm -f

.PHONY: all make clean fclean re

$(NAME): 	
			${CC} ${CFLAGS} -o ${NAME} ${SRC}

all: $(NAME)

make:
			all
clean:
			rm -f $(NAME)