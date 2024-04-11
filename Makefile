CC = gcc
CFLAGS = -std=c99 -Wall

build:
	$(CC) $(CFLAGS) lisp.c -o lisp
