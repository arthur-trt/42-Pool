# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 12:46:32 by atrouill          #+#    #+#              #
#    Updated: 2019/08/21 19:12:27 by atrouill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Var
NAME		= ft_display_file

PATH_SRC	= ./srcs/

PATH_INC	= ./includes/

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRCS		= 	${PATH_SRC}ft_display_file.c \
				${PATH_SRC}ft_utils.c \
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

.PHONY:		all clean fclean re
