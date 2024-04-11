CC = gcc
CFLAGS = -std=c99 -Wall
INCLUDES = -ledit

build:
	$(CC) $(CFLAGS) lisp.c $(INCLUDES) -o lisp
