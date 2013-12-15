#ifndef _EDGE_H_
#define _EDGE_H_

#include "liby26jin.h"
#include "vertex.h"

struct Edge 
{
  Vertex u;
  Vertex v;
  bool direct; // indicate if it is direct/indirect
  double weight;
};

#endif
