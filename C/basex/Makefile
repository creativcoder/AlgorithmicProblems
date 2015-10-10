CC=gcc
CFLAGS=-Wall -g
SRC_MAIN=./src/main.c
BIN=basex
LIBS=-lm

compile: main.c convert.o
	$(CC) $(SRC) -o basex

convert.o: src/convert.c src/convert.h
	$(CC) src/convert.c -c


install:
	cp basex /usr/local/bin

purge:
	rm /usr/local/bin/basex