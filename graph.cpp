#include <algorithm>
#include <iostream>
#include "graph.hpp"

void graph::add_vertex(int v) {
  if (std::find(begin(list), end(list), v) == end(list)) {
    list.emplace_back();
    auto v = list.back();
    v.emplace_back(v);
  } else {
    std::cout << "already there" << std::endl;
  }
}

void graph::connect(int v1, int v2) {

}

bool graph::is_connected(int v1, int v2) {
  return false;
}
