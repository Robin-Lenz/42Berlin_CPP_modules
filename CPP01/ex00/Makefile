NAME = zombie

CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS =main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re