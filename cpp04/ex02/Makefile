# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 19:34:39 by yaysu             #+#    #+#              #
#    Updated: 2022/11/16 14:46:49 by yaysu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

CC = c++  
NAME = animal

CFLANG = -Wall -Wextra -Werror -std=c++98 
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re