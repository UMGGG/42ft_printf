# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:22:09 by jaeyjeon          #+#    #+#              #
#    Updated: 2022/04/14 18:43:42 by jaeyjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c ft_printf_utils.c ft_print_c.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

%.o : %.c
		${CC} ${CFLAGS} -c -o $@ $<

$(NAME):	$(OBJS)
				ar crs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)
				$(RM) ft_printf.h.gch

re:			fclean $(NAME)

.PHONY:		all clean fclean re
