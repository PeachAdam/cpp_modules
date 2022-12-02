# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 15:20:08 by yaysu             #+#    #+#              #
#    Updated: 2022/11/30 14:45:03 by yaysu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

NAME	=	mutantstack

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re