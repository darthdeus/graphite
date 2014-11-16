#include <iostream>
#include "bfs.hpp"
#include "graph.hpp"

void check(const graph& g, int v1, int v2) {
  std::cout << v1 << " --> " << v2 << ": " << g.is_connected(v1, v2)
            << std::endl;
}

#include <vector>

int main() {
  graph g;

  auto v1 = g.add_vertex(1);
  auto v2 = g.add_vertex(2);
  auto v3 = g.add_vertex(3);

  g.connect(1, 2);
  g.connect(2, 3);

  // check(g, 1, 2);
  // check(g, 2, 3);
  // check(g, 2, 1);
  // check(g, 1, 3);

  std::cout << bfs(*v1, *v2) << std::endl;

  return 0;
}

