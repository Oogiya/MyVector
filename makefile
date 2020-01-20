.PHONY: clean

CC = g++

all: Vector dbg

Vector: VectorClass.h VectorClass.cpp Vector.cpp
	$(CC) -02 -std=c++11 -Wall Vector.cpp -o Vector
dbg: VectorClass.h VectorClass.cpp Vector.cpp
	$(CC) -2 -std=c++1 -Wall -D DEBUG Vector.cpp -o dbg

clean:
	rm Vector || true
	rm dbg || true
