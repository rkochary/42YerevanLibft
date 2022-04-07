# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkochary <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 19:27:24 by rkochary          #+#    #+#              #
#    Updated: 2022/04/04 17:41:57 by rkochary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	ar	rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
