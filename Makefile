# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 10:57:21 by hece              #+#    #+#              #
#    Updated: 2022/10/03 10:57:35 by hece             ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror


all :  ${NAME}

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
