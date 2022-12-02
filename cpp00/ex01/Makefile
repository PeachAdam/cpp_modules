.PHONY: 		all clean fclean re

NAME 		= 	phonebook

SRCS		=	main.cpp ContactClass.cpp PhonebookClass.cpp
OBJS		=	$(SRCS:.cpp=.o)

CC 			=	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
OCFLAGS		=	-Wall -Wextra -Werror

all:	 		$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OCFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				@rm -f $(OBJS)

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all