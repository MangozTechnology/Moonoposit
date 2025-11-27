/*graph.h*/

#ifndef _GRAPH_H_
#define _GRAPH_H_

class Graph {
public:
   Graph();
   virtual ~Graph();

   const char* const GRAPH_CONST("MonoGraph
odule");

   virtual void graphGetType() = 0;

};

#endif
