CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c11 -O0 -ggdb -no-pie
LIBS:=-lm

TARGETS:=typedef

all: $(TARGETS)

typedef : typedef.o
	$(CC) $(CFLAGS) $^ -o $@

typedef.o: typedef.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

clean:
	rm -f *.o
	rm -f $(TARGETS)
