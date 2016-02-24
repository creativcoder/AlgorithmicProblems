XLIB = -lX11
EXTRAS = -lm
TARGET = snake
CC = gcc
SOURCE = game.c
DEPS = gfx.c
all:
	@$(CC) $(SOURCE) $(DEPS) -o $(TARGET) $(XLIB) $(EXTRAS)
clean:
	@rm $(TARGET)

