CC=clang++ -std=c++11
FILES=main.cpp graph.cpp

default:
	 $(CC) $(FILES) -o bin/main
