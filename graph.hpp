#ifndef GUARD_GRAPH
#define GUARD_GRAPH

#include <vector>

class graph {

 public:
  using vertex_type = int;
  using adjacency_list = std::vector<std::vector<vetex_type>>;

  void add_vertex(vetex_type n);
  void connect(vertex_type v1, vertex_type v2);
  bool is_connected(vertex_type v1, vertex_type v2);

 private:
};

#endif GURAD_GRAPH
