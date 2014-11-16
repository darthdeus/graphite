#ifndef GUARD_VERTEX
#define GUARD_VERTEX

#include <vector>

class vertex {
  public:
    int value;
    std::vector<vertex*> edges;

    vertex(int v): value(v) {};
};


#endif

