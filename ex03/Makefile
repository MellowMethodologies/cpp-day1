CC=c++

NAME=Zombie

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm Zombie

.Phony: clean all