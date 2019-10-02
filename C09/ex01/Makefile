# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 11:03:57 by atrouill          #+#    #+#              #
#    Updated: 2019/08/17 12:56:55 by atrouill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Var
NAME		= libft.a

PATH_SRC	= ./srcs/

PATH_INC	= ./includes/

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRCS		= ${PATH_SRC}ft_putchar.c ${PATH_SRC}ft_swap.c ${PATH_SRC}ft_putstr.c ${PATH_SRC}ft_strlen.c ${PATH_SRC}ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

# Rules
all:		${NAME}

.c.o:
			${CC} ${CLFAGS} -c $< -I ${PATH_INC} -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
