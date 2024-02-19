/*
  ECE 101
  Math in C
  Feb 19, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Global variables go here
int degF = 360;
int degC;

int main() {
  // Local variables go here

  degC = round((degF - 32.0) * (5.0 / 9.0));
  printf("%d Fahrenheit is about %d Celcius.\n", degF, degC);
  return 0;
}