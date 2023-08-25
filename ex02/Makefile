# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 14:22:20 by sbadr             #+#    #+#              #
#    Updated: 2023/08/23 14:23:23 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++

NAME= Zombie

SRCS = main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm Zombie

re: clean all

.Phony: clean all re