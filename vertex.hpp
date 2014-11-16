#ifndef GUARD_VERTEX
#define GUARD_VERTEX

#include <vector>

class vertex {
  public:
    explicit vertex(int v): value(v) {};

    vertex(const vertex& v) = delete;
    vertex& operator=(const vertex& v) = delete;

    int value;
    // TODO - Make this less stupid
    std::vector<vertex*> edges;
};


#endif

