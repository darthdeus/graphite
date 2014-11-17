#include <queue>
#include <iostream>

#include "graph.hpp"

using std::cout;
using std::endl;

enum class vertex_color {
  white,
  gray,
  black
};

struct color {
  vertex_color c;
  explicit color(vertex_color c) : c(c) {}
};

color white(vertex_color::white);
color gray(vertex_color::gray);
color black(vertex_color::black);

void color_white(vertex* v) { v->metadata = &white; }
void color_gray(vertex* v) { v->metadata = &gray; }
void color_black(vertex* v) { v->metadata = &black; }

bool is_white(vertex* v) { return ((color*)v->metadata) == &white; }
bool is_gray(vertex* v) { return ((color*)v->metadata) == &gray; }
bool is_black(vertex* v) { return ((color*)v->metadata) == &black; }

int bfs(graph& g, vertex* start, vertex* end) {
  for (auto& v : g.list) {
    color_white(v.get());
  }

  std::queue<vertex*> queue;

  cout << "BFS start " << start->value << endl;

  for (auto v : start->edges) {
    cout << "pushing " << v->value << endl;
    queue.push(v);
    color_gray(v);
  }

  color_black(start);

  while (!queue.empty()) {
    auto v = queue.front();
    queue.pop();

    if (is_black(v)) continue;

    cout << "processing " << v->value << endl;
    if (v == end) {
      return v->value;
    }

    for (auto neighbour : v->edges) {
      if (is_white(neighbour)) {
        cout << "    pushing neighbour " << neighbour->value << endl;
        queue.push(neighbour);
        color_gray(neighbour);
      }

      color_black(v);
    }

    color_gray(v);
  }

  return -1;
}
