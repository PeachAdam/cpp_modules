# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 19:34:39 by yaysu             #+#    #+#              #
#    Updated: 2022/11/19 00:02:49 by yaysu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Bureaucrat.cpp main.cpp Form.cpp
CC = c++  
NAME = bureaucrat

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