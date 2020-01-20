.PHONY: clean

CC = g++


Vector: ./src/VectorClass.cpp ./src/Vector.cpp
	$(CC) -o Vector ./src/VectorClass.cpp ./src/Vector.cpp


clean:
	rm Vector || true
