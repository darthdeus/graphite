CC=clang++ -std=c++1y -g
FILES=graph.cpp vertex.cpp bfs.cpp main.cpp

default:
	 $(CC) $(FILES) -o bin/main
	 ./bin/main
