CC = gcc
CFLAGS = -g -Wall

TARGET = main
DEPS = linked_list


$(TARGET): $(TARGET).c $(DEPS).o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(DEPS).o

$(DEPS).o:$(DEPS).c $(DEPS).h
	$(CC) -c $(DEPS).c
