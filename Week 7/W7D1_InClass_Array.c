/*
  ECE 101
  Arrays in C
  Feb 19, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
long long int temperatures[12];
short int classScores[3] = {17, 42, -6};    // Declaring and init array
float gpsWaypoints[4][2] = {{43.0125, 83.7126}, {33.8317, 118.2817}, {33.9066, 118.1232}, {9.8500, 124.1435}};   // Kettering University; Carson, CA; St. John Bosco High School; Bohol, Philippines

int main() {
  // Local variables

  printf("Kettering University's coordinates are: %0.4f latitude, %0.4f longitude.\n", gpsWaypoints[0][0], gpsWaypoints[0][1]);
}