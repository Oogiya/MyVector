.PHONY: clean

CC = g++


Vector: ./include/VectorClass.h ./src/VectorClass.cpp ./src/Vector.cpp
	$(CC) -o Vector ./include/VectorClass.h ./src/VectorClass.cpp ./src/Vector.cpp


clean:
	rm Vector || true
