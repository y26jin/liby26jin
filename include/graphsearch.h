#ifndef _GRAPHSEARCH_H_
#define _GRAPHSEARCH_H_

#include "liby26jin.h"
#include "graph.h"
/*
 * Graph Search
 */
extern void BFS(Graph *graph);
extern void DFS(Graph *graph, Vertex **finishList);
extern int graph_search(void (*algm), Graph *graph, Vertex **finishList);

/*
 * Shortest Path
 */
extern int shortest_path(void (*algm), Graph *graph);

/*
 * Strongly Connected Graph
 */

/*
 * Minimum Spanning Tree
 */
extern int mst(Graph *graph);

#endif
