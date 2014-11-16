CC=clang++ -std=c++11
FILES=graph.cpp vertex.cpp bfs.cpp main.cpp

default:
	 $(CC) $(FILES) -o bin/main
	 ./bin/main
