#ifndef _LIBY26JIN_H_
#define _LIBY26JIN_H_

/*
 * Number Theory related macros
 */
#define COMPOSITE 0
#define PRIME 1
#define FERMAT_WITNESS 2
#define STRONG_WITNESS 3

/*
 * Graph Algm Callback macros
 */
#define INT_COORD 0
#define FLOAT_COORD 1

#define BFS 1
#define DFS 2
#define Djskra 3
#define Prim 4
#define Kruskal 5
#define TarjanSCC 6

/*
 * Handy functions
 */
#define EuclidDistance(a,b,c,d) sqrt((a-b)*(a-b)+(c-d)*(c-d))
#define DEBUG(msg) do{std::cerr<<msg<<std::endl;}while(0)


#endif
