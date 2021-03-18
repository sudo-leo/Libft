# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larmelli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 17:58:09 by larmelli          #+#    #+#              #
#    Updated: 2021/01/18 18:00:38 by larmelli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${wildcard *.c}
OBJS = ${SRCS:.c=.o}
CC =	gcc

CFLAGS =	-Wall -Wextra -Werror

NAME =	libft.a

AR =	ar -rcs

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
					${AR} $(NAME) $(OBJS)

all :			$(NAME)

clean :
					rm -f ${OBJS}

fclean :	clean
					rm -f ${NAME}

re :			fclean all
