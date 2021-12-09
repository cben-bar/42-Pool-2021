# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 00:03:34 by cben-bar          #+#    #+#              #
#    Updated: 2021/09/23 03:18:32 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= "do-op"

HEADERS		= ./ft.h

SRCS		= ./ft_do_op.c ./ft_misc.c ./ft_put_atoi.c ./main.c

FLAGS		= -Wall -Wextra -Werror

OBJS		= ${SRCS:.c=.o}

all:		${NAME}

.c.o:		${SRCS}
			gcc ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
