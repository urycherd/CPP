### PROGRAM ###

NAME = zombie04

### COMPILER ###

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

### SOURCES ###

SRCS	= main.cpp replace.cpp
OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f

### RULES ###

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re