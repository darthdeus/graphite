#include <iostream>

#include "bfs.hpp"
#include "graph.hpp"

static void check(const graph& g, int v1, int v2) {
  std::cout << v1 << " --> " << v2 << ": " << g.is_connected(v1, v2)
            << std::endl;
}

int main() {
  graph g;

  auto v1 = g.add_vertex(1);
  auto v2 = g.add_vertex(2);
  auto v3 = g.add_vertex(3);
  auto v4 = g.add_vertex(4);
  auto v5 = g.add_vertex(5);
  auto v6 = g.add_vertex(6);

  g.connect(1, 2);
  g.connect(1, 3);
  g.connect(2, 3);
  g.connect(2, 5);
  g.connect(3, 4);
  g.connect(4, 6);
  g.connect(5, 6);

  // check(g, 1, 2);
  // check(g, 2, 3);
  // check(g, 2, 1);
  // check(g, 1, 3);

  std::cout << bfs(g, v1, v6) << std::endl;

  return 0;
}

