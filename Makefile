CC = cc
CCDB = cc -g
SRC = $(wildcard *.c)

all = $(NAME)

%.o: $(SRC)
	$(CC) $^
 