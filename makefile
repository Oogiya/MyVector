.PHONY: clean

CC = g++

all: Vector dbg

Vector: ./include/VectorClass.h ./src/VectorClass.cpp ./src/Vector.cpp
	$(CC) -02 -std=c++14 -Wall ./src/Vector.cpp -o Vector
dbg: ./include/VectorClass.h ./src/VectorClass.cpp ./src/Vector.cpp
	$(CC) -02 -std=c++14 -Wall -D DEBUG ./src/Vector.cpp -o dbg

clean:
	rm Vector || true
	rm dbg || true
