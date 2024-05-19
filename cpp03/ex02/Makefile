### PROGRAM ###

NAME = a.out

### COMPILER ###

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

### SOURCES ###

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADERS = .
OBJS = $(SRCS:%.cpp=%.o)
DEPS = $(SRCS:%.cpp=%.d)
RM = rm -f

### RULES ###

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@ -I$(HEADERS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I$(HEADERS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

-include $(DEPS)
