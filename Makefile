CC = g++
CFLAGS = -Wall
LDFLAGS =
OBJFILES = main.cpp
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)