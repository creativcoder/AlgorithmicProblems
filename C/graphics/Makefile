XLIB = -lX11
EXTRAS = -lm
TARGET = graphics
CC = gcc
SOURCE = graphics.c
DEPS = gfx.c
all:
	@$(CC) $(SOURCE) $(DEPS) -o $(TARGET) $(XLIB) $(EXTRAS)
clean:
	@rm $(TARGET)

