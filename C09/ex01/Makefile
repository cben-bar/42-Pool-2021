# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:20:40 by cben-bar          #+#    #+#              #
#    Updated: 2021/09/21 15:37:17 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

HEADERS		= ./includes/

SRCS		= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

FLAGS		= -Wall -Wextra -Werror

OBJS		= ${SRCS:.c=.o}

all:		${NAME}

.c.o:		${SRCS}
			gcc ${FLAGS} -c -I ${HEADERS} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS} 

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
