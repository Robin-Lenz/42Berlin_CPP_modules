NAME = Animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp \
WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re