SRCS			=	main.cpp \
					srcs/zombie.cpp \
					srcs/newZombie.cpp \
					srcs/randomChump.cpp \
					
NAME			= Zomboid
OBJS			= $(SRCS:.cpp=.o)
CXX				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -I includes/

$(NAME):	$(SRCS)
		$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
	   	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
