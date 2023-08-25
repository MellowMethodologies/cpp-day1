# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 14:23:48 by sbadr             #+#    #+#              #
#    Updated: 2023/08/23 14:23:49 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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