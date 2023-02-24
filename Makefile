# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 00:14:33 by rdias-ba          #+#    #+#              #
#    Updated: 2023/02/24 15:15:12 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT_PRE = $(addprefix ${LIBFT_DIR}, $(LIBFT_SRCS))
PRINTF_PRE = $(addprefix ${PRINTF_DIR}, $(PRINTF_SRCS))
LIBFT_DIR = libft/
PRINTF_DIR = ft_printf/
OBJS_DIR = objs/

SRCS = ${LIBFT_SRCS} ${PRINTF_SRCS}
SRCS_PRE = ${LIBFT_PRE} ${PRINTF_PRE}
OBJS = ${SRCS:%.c=${OBJS_DIR}%.o}

LIBFT_SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c\
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_putchar.c\
ft_putstr.c

PRINTF_SRCS = ft_printf.c ft_args.c ft_args_next.c\

CC = gcc
RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all: ${OBJS_DIR} ${NAME}

${OBJS_DIR}%.o	:	${SRCS_PRE}
				$(CC) $(CFLAGS) -c $< -o $@

${OBJS_DIR}:
		mkdir -p $@

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${OBJS_DIR}

fclean: clean
		${RM} ${NAME}

re: fclean all
