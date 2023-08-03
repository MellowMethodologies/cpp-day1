CC=c++

NAME= program

SRCS = main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(NAME)

test:
	touch test; echo "hello my world" > test; ./program test hello lwalid

.Phony: clean all