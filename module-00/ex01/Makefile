SRCS			=	main.cpp \
					PhoneBook.cpp \
					Contact.cpp
					
NAME			= MyAwesomePhoneBook
OBJS			= $(SRCS:.cpp=.o)
CPP				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98 ##mac

$(NAME):	$(SRCS)
		$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
	   	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
