#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define distance(x1, y1, x2, y2) sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))

int main () {
    int x1 = 1;
    int x2 = 2;
    int y1 = 2;
    int y2 = 5;

    printf("The distance between (%d, %d) and (%d, %d) is: %0.2f.\n", x1, y1, x2, y2, distance(x1, x2, y1, y2));
}