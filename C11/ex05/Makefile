# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/22 14:37:20 by atrouill          #+#    #+#              #
#    Updated: 2019/08/22 15:34:59 by atrouill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Var
NAME		= do-op

PATH_SRC	= ./srcs/

PATH_INC	= ./includes/

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRCS		= 	${PATH_SRC}ft_atoi.c \
				${PATH_SRC}ft_putnbr.c \
				${PATH_SRC}ft_utils.c \
				${PATH_SRC}ft_do_op.c \
				${PATH_SRC}ft_op.c \
				${PATH_SRC}main.c

OBJS		= ${SRCS:.c=.o}

# Rules
all:		${NAME}

.c.o:
			${CC} ${CLFAGS} -I ${PATH_INC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
