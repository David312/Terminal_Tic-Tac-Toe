EXE = p1
OBJS = Square.o Board.o Score.o
DEBUG = -g
CC = g++
CFLAGS = -Wall $(DEBUG) -c
LFLAGS = -Wall $(DEBUG)


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1

Square.o: Square.cpp Square.h
	$(CC) $(CFLAGS) Square.cpp

Board.o: Board.cpp Board.h Square.h
	$(CC) $(CFLAGS) Board.cpp

Score.o: Score.cpp Score.h
	$(CC) $(CFLAGS) Score.cpp

clean:
	rm *.o *~ $(EXE) 2> /dev/null
