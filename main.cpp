#include <iostream>

#include "bfs.hpp"
#include "store.hpp"
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

  store s;
  s.save(g, "tmp/output.txt");


  // check(g, 1, 2);
  // check(g, 2, 3);
  // check(g, 2, 1);
  // check(g, 1, 3);

  bfs b(g, v1, v6);
  for (int i = 0; i < 10; i++) {
    std::cout << b.step() << std::endl;
  }

  return 0;
}

