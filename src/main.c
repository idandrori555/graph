#include "../include/examples.h"
#include "../include/graph.h"

int main(void)
{
  Point points[NUM_POINTS] = {0};

  graph(points, NUM_POINTS, f);
  lineGraph(points, NUM_POINTS);

  return 0;
}
