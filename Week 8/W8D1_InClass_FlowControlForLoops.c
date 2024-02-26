/*
  ECE 101
  Flow Control For Loops
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables for determining Celcius or Fahrenheit
const char CELCIUS = 0;
const char FAHRENHEIT = 1;

char cel[] = "Celcius";
char far[] = "Fahrenheit";

float temp;
char scale;

int main () {
  // Local variables
  temp = 222;
  scale = CELCIUS;
  //scale = FAHRENHEIT;

  if (scale == CELCIUS && temp < 0 || scale == FAHRENHEIT && temp < 32) {
    printf("The water is Ice ");
  }
  else if (scale == CELCIUS && temp > 100 || scale == FAHRENHEIT && temp > 212) {
    printf("The water is Steam ");
  }
  else {
    printf("The water is Liquid ");
  }

  // This prints to console every time
  printf("at %5.2f degrees %s", temp, scale == CELCIUS ? cel:far);
}