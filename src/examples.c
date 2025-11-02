#include "../include/examples.h"
#include <math.h>

double f(double x)
{
  return x;
}

double g(double x)
{
  return x * x;
}

double h(double x)
{
  return x == 0 ? NAN : 1.0 / x;
}
