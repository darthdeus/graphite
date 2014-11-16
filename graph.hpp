#ifndef GUARD_GRAPH
#define GUARD_GRAPH

#include <vector>

class vertex {
  public:
    int value;
    std::vector<vertex*> edges;

    vertex(int v): value(v) {};
};

class graph {

 public:
  // using vertex_type = int;

  using adjacency_list = std::vector<vertex>;

  void add_vertex(int n);
  void connect(int v1, int v2);
  bool is_connected(int v1, int v2);

 private:
  adjacency_list list;
};

#endif
