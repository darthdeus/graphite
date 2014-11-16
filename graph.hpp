#ifndef GUARD_GRAPH
#define GUARD_GRAPH

#include <vector>
#include "vertex.hpp"

class graph {

 public:
  using adjacency_list = std::vector<vertex>;

  const vertex* add_vertex(int n);
  void connect(int v1, int v2);
  bool is_connected(int v1, int v2) const;

 private:
  adjacency_list list;

  // Try to find a vertex in the graph, otherwise return nullptr.
  vertex* find(int n) const;
};

#endif

