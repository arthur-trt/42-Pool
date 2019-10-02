# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 12:46:32 by atrouill          #+#    #+#              #
#    Updated: 2019/08/21 02:02:58 by atrouill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Var
NAME		= ft_tail

PATH_SRC	= ./srcs/

PATH_INC	= ./includes/

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRCS		= 	${PATH_SRC}ft_file_size.c \
				${PATH_SRC}ft_tail.c \
				${PATH_SRC}ft_utils.c \
				${PATH_SRC}ft_check_args.c \
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
