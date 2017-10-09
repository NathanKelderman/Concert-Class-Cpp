all: concert.cpp main.cpp
	clang++ concert.cpp main.cpp -o main -std=c++0x
