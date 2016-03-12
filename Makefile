EXE = p1

SRCDIR = src

OBJS = Square.o Board.o Score.o
DEBUG = -g
CC = g++
CFLAGS = -Wall $(DEBUG) -c
LFLAGS = -Wall $(DEBUG)


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1

Square.o: $(SRCDIR)/Square.cpp $(SRCDIR)/Square.h
	$(CC) $(CFLAGS) $(SRCDIR)/Square.cpp

Board.o: $(SRCDIR)/Board.cpp $(SRCDIR)/Board.h $(SRCDIR)/Square.h
	$(CC) $(CFLAGS) $(SRCDIR)/Board.cpp

Score.o: $(SRCDIR)/Score.cpp $(SRCDIR)/Score.h
	$(CC) $(CFLAGS) $(SRCDIR)/Score.cpp

clean:
	rm *.o *~ $(EXE) 2> /dev/null
