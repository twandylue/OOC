#include "labeledPoint.h"
#include "point.h"
#include <stdio.h>
#include <stdlib.h>

struct LabeledPoint {
  double x;
  double y;
  char *name;
};

struct LabeledPoint *makeLabeledPoint(double x, double y, char *label) {
  struct LabeledPoint *lp = malloc(sizeof(struct LabeledPoint));
  lp->x = x;
  lp->y = y;
  lp->name = label;

  return lp;
}

void setLabel(struct LabeledPoint *lp, char *label) { lp->name = label; }

char *getLabel(struct LabeledPoint *lp) { return lp->name; }

/* int main(void) { */
/*   struct LabeledPoint *origin = makeLabeledPoint(0, 0, "origin"); */
/*   struct LabeledPoint *lowerLeft = makeLabeledPoint(-1.0, -1.0, "lowerLeft");
 */

/*   double r = getDistance((struct Point *)origin, (struct Point *)lowerLeft);
 */
/*   printf("Distance: %f\n", r); */

/*   return 0; */
/* } */
