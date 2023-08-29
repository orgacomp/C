CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c11 -O0 -ggdb -no-pie
LIBS:=-lm

all: typedef

typedef : typedef.o
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

typedef.o: typedef.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

clean:
	rm -f *.o
	rm -f typedef.o
