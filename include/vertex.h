#ifndef _VERTEX_H_
#define _VERTEX_H_

#include "liby26jin.h"

struct Vertex 
{
#if INT_COORD
  int xcoord;
  int ycoord;
#elseif FLOAT_COORD
  double xccord;
  double ycoord;
#endif
};

#endif
