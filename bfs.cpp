#include <queue>

#include "graph.hpp"

int bfs(const vertex& start, const vertex& end) {
  std::queue<const vertex*> queue;

  for (auto v : start.edges) {
    queue.push(v);
  }

  while (!queue.empty()) {
    auto v = queue.front();
    queue.pop();

    if (v == &end) {
      return v->value;
    }

    for (auto neighbour : v->edges) {
      queue.push(neighbour);
    }
  }

  return -1;
}
