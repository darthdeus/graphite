#ifndef GUARD_VERTEX
#define GUARD_VERTEX

#include <iostream>
#include <vector>
#include "edge.hpp"

class vertex {
 public:
  explicit vertex(int v) : value(v) {};

  vertex(const vertex& v) = delete;
  vertex& operator=(const vertex& v) = delete;

  int value;

  std::vector<edge> edges;

  void* metadata;
};

#endif

