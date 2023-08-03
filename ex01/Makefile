CC=c++

NAME=Zombie

SRCS=zombieHorde.cpp Zombie.cpp main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm Zombie

.Phony: clean all