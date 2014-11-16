#include <queue>
#include <iostream>

#include "graph.hpp"

using std::cout;
using std::endl;

int bfs(const vertex& start, const vertex& end) {
  std::queue<const vertex*> queue;

  cout << "BFS start " << start.value << endl;

  for (auto v : start.edges) {
    cout << "pushing " << v->value << endl;
    queue.push(v);
  }

  while (!queue.empty()) {
    auto v = queue.front();
    queue.pop();

    cout << "processing " << v->value << endl;

    if (v == &end) {
      return v->value;
    }

    for (auto neighbour : v->edges) {
      cout << "    pushing neighbour " << neighbour->value << endl;
      queue.push(neighbour);
    }
  }

  return -1;
}
