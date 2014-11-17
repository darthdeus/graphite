#include <queue>
#include <iostream>

#include "graph.hpp"

using std::cout;
using std::endl;

int bfs(graph& g, vertex* start, vertex* end) {
  g.color_white();

  std::queue<vertex*> queue;

  cout << "BFS start " << start->value << endl;

  for (auto v : start->edges) {
    cout << "pushing " << v->value << endl;
    queue.push(v);
  }

  start->color_gray();

  while (!queue.empty()) {
    auto v = queue.front();
    queue.pop();

    if (v->color == vertex_color::gray) continue;

    cout << "processing " << v->value << endl;
    if (v == end) {
      return v->value;
    }

    for (auto neighbour : v->edges) {
      if (!neighbour->visited()) {
        cout << "    pushing neighbour " << neighbour->value << endl;
        queue.push(neighbour);
      }
    }

    v->color_gray();
  }

  return -1;
}
