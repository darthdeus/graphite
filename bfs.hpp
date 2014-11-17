#ifndef GUARD_BFS
#define GUARD_BFS

#include "graph.hpp"
#include "vertex.hpp"
#include <queue>

class bfs {
 public:
  bfs(graph& g, vertex* start, vertex* end);

  std::queue<vertex*> queue;
  vertex* start;
  vertex* end;
  graph& g;

  int step();
};

#endif
