
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkielbow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 18:24:01 by mkielbow          #+#    #+#              #
#    Updated: 2019/08/18 18:42:19 by mkielbow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	./srcs/ft_find_numbers.c \
			./srcs/ft_make_dict.c \
			./srcs/ft_print_comb.c \
			./srcs/ft_process_nbr.c \
			./srcs/ft_str_utils.c \
			./srcs/ft_ul_conv.c \
			./srcs/ft_ul_utils.c \
			./srcs/main.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

NAME	= rush-02

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} -I includes ${OBJS}

clean:
			${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all