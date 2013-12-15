#include "liby26jin.h"
#include "graphsearch.h"

void BFS(Graph *graph){
  if(graph == NULL){
    DEBUG("Graph is NULL!");
    return;
  }

  // Keep track of visited vertices
  Vertex *finishList = (Vertex *)malloc(graph->vnum * sizeof(Vertex));

  Vertex *targetList = (Vertex *)malloc();
 
}

void DFS(Graph *graph, Vertex **finishList){

}
