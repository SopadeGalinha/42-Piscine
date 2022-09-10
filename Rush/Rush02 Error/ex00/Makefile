# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galpers <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 11:42:26 by galpers           #+#    #+#              #
#    Updated: 2021/09/26 19:59:20 by galpers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= 	ft_atoi.c ft_clear.c ft_file_read.c ft_number_check.c ft_putnbr.c \
			ft_strdup.c ft_strlen.c main.c parse.c print.c split_number.c 

SRCS	= 	${addprefix ${PRE}, ${SRC}}

OBJS	= 	${SRCS:.c=.o}

PRE		= 	./srcs/

HEAD	= 	./includes/

DICT	= 	./dicts/

NAME	= 	rush-02

RM		= 	rm -f

GCC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

all:	 	${NAME}

.c.o:		${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			/bin/rm -f ${OBJS}

fclean:		clean
			/bin/rm -f ${NAME}

re:			fclean all

PHONY:		all clean fclean re
