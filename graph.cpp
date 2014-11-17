#include <algorithm>
#include <memory>
#include <iostream>
#include "graph.hpp"

void vertex_not_found(const char* f, int vn1, int vn2) {
  std::cout << f << ": vertex not found " << vn1 << " --> " << vn2 << std::endl;
}

vertex* graph::add_vertex(int v) {
  auto found = find(v);

  if (found) {
    return &*found;
  } else {
    list.push_back(std::make_unique<vertex>(v));
    return list.back().get();
  }
}

void graph::connect(int vn1, int vn2) {
  auto v1 = find(vn1);
  auto v2 = find(vn2);

  if (!v1 || !v2) {
    // TODO - temporary for now
    vertex_not_found("graph::connect", vn1, vn2);
    return;
  } else {
    v1->edges.push_back(v2);
    v2->edges.push_back(v1);
  }
}

bool graph::is_connected(int vn1, int vn2) const {
  auto v1 = find(vn1);
  auto v2 = find(vn2);

  if (!v1 || !v2) {
    vertex_not_found("graph::is_connected", vn1, vn2);
    return false;
  }

  auto found = std::find(begin(v1->edges), end(v1->edges), v2);

  return found != end(v1->edges);
}

vertex* graph::find(int v) const {
  auto p = [v](const vertex & vert) { return vert.value == v; };

  auto found = std::find_if(begin(list), end(list), p);

  if (found == end(list)) {
    return nullptr;
  } else {
    return const_cast<vertex*>(&*found);
  }
}

