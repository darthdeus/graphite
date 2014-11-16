#include <iostream>
#include "graph.hpp"

int main() {
  graph g;

  g.add_vertex(1);
  g.add_vertex(2);
  g.add_vertex(3);

  g.connect(1, 2);
  g.connect(2, 3);

  g.connect(2,3);
  std::cout << g.is_connected(1, 3) << std::endl;

  return 0;
}

