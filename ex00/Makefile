SRCS			=	./sources/megaphone.cpp
					
NAME			= megaphone
OBJS			= $(SRCS:.cpp=.o)
LIBS			= sources/libft/libft.a
CPP				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98


$(NAME):	$(SRCS) $(LIBS)
		$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
	   	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
