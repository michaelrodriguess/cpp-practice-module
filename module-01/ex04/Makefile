SRCS			=	main.cpp \
				
					
NAME			= SedIsForLosers 
OBJS			= $(SRCS:.cpp=.o)
CXX				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

$(NAME):	$(SRCS)
		$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
	   	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
