#ifndef GUARD_VERTEX
#define GUARD_VERTEX

#include <iostream>
#include <vector>

enum class vertex_color {
  white,
  gray,
  black
};

class vertex {
 public:
  explicit vertex(int v) : value(v) {};

  vertex(const vertex& v) = delete;
  vertex& operator=(const vertex& v) = delete;

  int value;

  std::vector<vertex*> edges;  // TODO - Make this less stupid

  vertex_color color = vertex_color::white;

  bool visited() { return color != vertex_color::white; }
  void color_white() { color = vertex_color::white; }
  void color_gray() { color = vertex_color::gray; }
  void color_black() { color = vertex_color::black; }
};

#endif

