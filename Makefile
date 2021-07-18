# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-madi <ael-madi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/18 18:28:22 by ael-madi          #+#    #+#              #
#    Updated: 2021/07/18 18:28:23 by ael-madi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SERVER = server
CLIENT = client

SRCS = utils.c
NAME = $(SERVER) $(CLIENT)

all : $(NAME)

$(SERVER): $(SRCS) server.c
		gcc $(FLAGS) -o $(SERVER) server.c $(SRCS) -g
$(CLIENT): $(SRCS) client.c
		gcc $(FLAGS) -o $(CLIENT) client.c $(SRCS) -g
bonus: all

clean:
	rm -rf client server

fclean: clean

re: fclean all
