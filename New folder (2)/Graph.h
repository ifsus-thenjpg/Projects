//Susanna Morin
//sumorin
//pa4


#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include "List.h"

/*** Exported Types ***/
typedef struct GraphObj* Graph;

/*** Constant Macros ***/
#define WHITE 1
#define GREY 2
#define BLACK 3
#define NIL -1
#define INF -1000
#define UNDEF -10000

/*** Constructors-Destructors ***/
Graph newGraph(int n);
void freeGraph(Graph* pG);
/*** Access functions ***/
int getOrder(Graph G);
int getSize(Graph G);
int getSource(Graph G);
int getParent(Graph G, int u);
int getDist(Graph G, int u);
void getPath(List L, Graph G, int u);
int getDiscover(Graph G, int u);
int getFinish(Graph G, int u);
/*** Manipulation procedures ***/
void makeNull(Graph G);
void addEdge(Graph G, int u, int v);
void addArc(Graph G, int u, int v);
void BFS(Graph G, int s);
void DFS(Graph G, List S);
void Visit(Graph G, int x, List S);
/*** Other operations ***/
Graph transpose(Graph G);
Graph copyGraph(Graph G);
void printGraph(FILE* out, Graph G);
void printGraphStdOut(Graph G, List S);


#endif // GRAPH_H_INCLUDED
