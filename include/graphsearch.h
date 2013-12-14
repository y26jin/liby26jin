#ifndef _GRAPHSEARCH_H_
#define _GRAPHSEARCH_H_

#include "liby26jin.h"
#include "vertex.h"
#include "graph.h"
/*
 * Graph Search
 */
extern int graph_search(void (*algm), Graph *graph, Vertex **finishList);

#endif
