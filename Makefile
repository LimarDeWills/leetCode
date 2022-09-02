CC=g++
PROJECT_NAME=pivotIndex
CFLAGS=-c -Wall

all: pivotIndex

pivotIndex: build/pivotIndex.o
	$(CC) build/pivotIndex.o -o $(PROJECT_NAME)

build/pivotIndex.o: pivotIndex.cpp
	$(CC) $(CFLAGS) build/pivotIndex.o pivotIndex.cpp

clean:
	rm -r build/*.o $(PROJECT_NAME)