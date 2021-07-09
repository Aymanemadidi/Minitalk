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
