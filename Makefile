CC=g++
CFLAGS=-std=c++11 -lncurses
all: quest.cpp
	$(CC) main.cpp  quest.cpp screen.cpp net.cpp  -o quest $(CFLAGS)
clean:
	$(RM) quest
