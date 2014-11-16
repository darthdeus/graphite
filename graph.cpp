#include <algorithm>
#include <iostream>
#include "graph.hpp"

void graph::add_vertex(int v) {
  auto p = [v](const vertex& vert) {
    return vert.value == v;
  };

  auto found = std::find_if(begin(list), end(list), p);

  if (found == end(list)) {
    list.emplace_back(v);
  } else {
    std::cout << "already there" << std::endl;
  }
}

void graph::connect(int v1, int v2) {

}

bool graph::is_connected(int v1, int v2) {
  return false;
}
