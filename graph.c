#include "graph.h"
#include <math.h>
#include <stdio.h>

void graph(Point *points, unsigned numPoints, double (*f)(double))
{
  double step = (2.0 * MAX_X) / (numPoints - 1);
  for (unsigned i = 0; i < numPoints; i++)
  {
    points[i].x = -MAX_X + i * step;
    points[i].y = f(points[i].x);
  }
}

void lineGraph(Point *points, unsigned numPoints)
{
  double y_min = INFINITY, y_max = -INFINITY;

  for (unsigned i = 0; i < numPoints; i++)
  {
    if (!isfinite(points[i].y))
    {
      continue;
    }

    if (points[i].y > y_max)
    {
      y_max = points[i].y;
    }

    if (points[i].y < y_min)
    {
      y_min = points[i].y;
    }
  }

  double y_range = y_max - y_min;
  if (y_range == 0)
  {
    y_range = 1.0;
  }

  int x_axis_row = -1;
  if (y_min <= 0 && y_max >= 0)
  {
    x_axis_row = (int)((y_max / y_range) * GRAPH_HEIGHT);
  }

  int y_axis_col = numPoints / 2;

  for (int row = 0; row <= GRAPH_HEIGHT; row++)
  {
    double y_val = y_max - row * (y_range / GRAPH_HEIGHT);

    for (unsigned col = 0; col < numPoints; col++)
    {
      double diff = points[col].y - y_val;

      if (!isfinite(points[col].y))
      {
        if ((int)col == y_axis_col)
        {
          printf("|");
        }
        else
        {
          printf(" ");
        }
      }

      else if (fabs(diff) < (y_range / GRAPH_HEIGHT / 2.0))
      {
        printf("*");
      }
      else if (row == x_axis_row)
      {
        printf("-");
      }
      else if ((int)col == y_axis_col)
      {
        printf("|");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  printf("\n\n");
}
