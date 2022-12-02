# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 18:20:49 by yaysu             #+#    #+#              #
#    Updated: 2022/11/10 15:36:25 by yaysu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp ClapTrap.cpp
OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

NAME	=	claptrap

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re