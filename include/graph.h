#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "liby26jin.h"
#include "vertex.h"
#include "edge.h"

struct Graph 
{
  Vertex *vlist;
  Edge *elist;
  bool direct; // indicate if it is directed graph
  int vnum; // number of vertices
  int ednum; // number of edge
};


#endif
