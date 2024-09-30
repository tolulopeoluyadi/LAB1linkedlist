# Makefile for list implementation and test file
CC = gcc
CFLAGS = -Wall -g -std=c99  # Add the -std=c99 flag here

all: list

list: main.o list.o
	$(CC) $(CFLAGS) -o list main.o list.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

list.o: list.c
	$(CC) $(CFLAGS) -c list.c

clean:
	rm -f *.o list
