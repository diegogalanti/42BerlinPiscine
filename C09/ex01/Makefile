# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 12:32:32 by digallar          #+#    #+#              #
#    Updated: 2022/09/26 13:21:25 by digallar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUTPUTFILE = libft.a

OBJ = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

CC = cc

INC = includes/ft.h

RMCMD = rm -f

CFLAGS = -Wall -Wextra -Werror

all: ${OUTPUTFILE}

make: all

${OUTPUTFILE}: ${SRC} ${INC}
				${CC} ${CFLAGS} -c ${SRC} -I ${INC}
				mv *.o ./srcs
				ar rcs ${OUTPUTFILE} ${OBJ}

clean:
		${RMCMD} srcs/*.o

fclean: clean
		${RMCMD} ${OUTPUTFILE}

re: fclean all