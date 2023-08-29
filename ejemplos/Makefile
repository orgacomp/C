CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c11 -O0 -ggdb -no-pie
LIBS:=-lm

TARGETS:=typedef ifelse switch size_t for while do_while

all: $(TARGETS)

typedef : typedef.o
	$(CC) $(CFLAGS) $^ -o $@

typedef.o: typedef.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

ifelse : ifelse.o
	$(CC) $(CFLAGS) $^ -o $@

ifelse.o: if_else.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

switch : switch.o
	$(CC) $(CFLAGS) $^ -o $@

switch.o: switch.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

size_t : size_t.o
	$(CC) $(CFLAGS) $^ -o $@

size_t.o: size_t.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

for : for.o
	$(CC) $(CFLAGS) $^ -o $@

for.o: for.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

while: while.o
	$(CC) $(CFLAGS) $^ -o $@

while.o: while.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)

do_while: do_while.o
	$(CC) $(CFLAGS) $^ -o $@

do_while.o: do_while.c
	$(CC) $(CFLAGS) -c $^ -o $@ $(LIBS)


clean:
	rm -f *.o
	rm -f $(TARGETS)
