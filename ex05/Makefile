CC=c++

NAME= Harl

SRCS = main.cpp Harl.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm $(NAME)

test:
	touch test; echo "hello world" > test; ./program test hello lwalid

.Phony: clean all