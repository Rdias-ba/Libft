# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 13:55:06 by rdias-ba          #+#    #+#              #
#    Updated: 2023/02/01 14:39:49 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_fct.c ft_args.c ft_args_next.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f
ARCHIVE = ar rcs
CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${ARCHIVE} ${NAME} ${OBJS}

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all