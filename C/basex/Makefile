CC=gcc
CFLAGS=-Wall -g
SRC_MAIN=./src/main.c
SRC_DEPS=./src/convert.c
SRC_OBJ=convert.o
BIN=./build/basex
LIBS=-lm

compile: src/main.c $(SRC_OBJ)
	mkdir build
	gcc $(SRC_MAIN) $(SRC_DEPS) -o $(BIN) $(LIBS)

$(SRC_OBJ): src/convert.c src/convert.h
	$(CC) src/convert.c -c -lm

clean: 
	rm -rf build 
	rm src/*.o *.o

install:
	sudo cp $(BIN) /usr/bin

purge:
	sudo rm /usr/bin/basex