# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 14:23:45 by sbadr             #+#    #+#              #
#    Updated: 2023/08/25 12:29:36 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
	./Harl
re: clean all

.Phony: clean all re