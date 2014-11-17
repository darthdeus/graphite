#ifndef GUARD_VERTEX
#define GUARD_VERTEX

#include <iostream>
#include <vector>

class vertex {
 public:
  explicit vertex(int v) : value(v) {};

  vertex(const vertex& v) = delete;
  vertex& operator=(const vertex& v) = delete;

  int value;

  std::vector<vertex*> edges;  // TODO - Make this less stupid

  void* metadata;
};

#endif

