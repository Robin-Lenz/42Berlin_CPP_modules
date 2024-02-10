NAME = harl

CC	= c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp\
	Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re