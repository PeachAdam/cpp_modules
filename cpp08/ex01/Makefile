# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 01:08:08 by yaysu             #+#    #+#              #
#    Updated: 2022/11/30 14:44:33 by yaysu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Span.cpp
OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

NAME	=	span

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re