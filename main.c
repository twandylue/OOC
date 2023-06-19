#include "labeledPoint.h"
#include "point.h"
#include <stdio.h>

int main(void) {
  struct Point *p1 =
      makePoint(0.0, 3.0); // struct Point p1 = {.x = 0.0, .y = 3.0};
  struct Point *p2 =
      makePoint(4.0, 0.0); // struct Point p2 = {.x = 4.0, .y = 0.0};
  double distance = getDistance(p1, p2);
  printf("Point Distance: %f\n", distance);

  struct LabeledPoint *origin = makeLabeledPoint(3.0, 0, "origin");
  struct LabeledPoint *lowerLeft = makeLabeledPoint(0.0, 4.0, "lowerLeft");

  double r = getDistance((struct Point *)origin, (struct Point *)lowerLeft);
  printf("Labled Point Distance: %f\n", r);

  return 0;
}
