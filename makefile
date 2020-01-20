.PHONY: clean

CXX = g++
DEBUG = -g
CXXFLAGS = -Wall $(DEBUG) -std=c++1y -pthread
LDFLAGS = -pthread

Vector: ./src/VectorClass.cpp ./src/Vector.cpp
	$(CXX) $(CXXFLAGS) -o ./src/VectorClass.cpp ./src/Vector.cpp


clean:
	rm Vector || true
