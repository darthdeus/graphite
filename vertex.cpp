#include <ostream>
#include "vertex.hpp"
#include "edge.hpp"

std::ostream& operator<<(std::ostream& os, const vertex& v) {
  os << v.value << "\t";

  for (auto e : v.edges) {
    os << e.v->value << " ";
  }

  return os;
}
