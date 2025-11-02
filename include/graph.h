#pragma once

#define MAX_X 20
#define NUM_POINTS 41
#define GRAPH_HEIGHT 20

typedef struct
{
  double x, y;
} Point;

void graph(Point *points, unsigned numPoints, double (*f)(double));
void lineGraph(Point *points, unsigned numPoints);
