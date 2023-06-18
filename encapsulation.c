#include "point.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct Point {
  double x;
  double y;
};

struct Point *makePoint(double x, double y) {
  struct Point *p = malloc(sizeof(struct Point));
  p->x = x;
  p->y = y;

  return p;
}

double getDistance(struct Point *p1, struct Point *p2) {
  double dx = p1->x - p2->x;
  double dy = p1->y - p2->y;

  return sqrt(dx * dx + dy * dy);
}

int main(void) {
  struct Point *p1 =
      makePoint(0.0, 3.0); // struct Point p1 = {.x = 0.0, .y = 3.0};
  struct Point *p2 =
      makePoint(4.0, 0.0); // struct Point p2 = {.x = 4.0, .y = 0.0};
  double distance = getDistance(p1, p2);
  printf("Distance: %f\n", distance);

  return 0;
}
