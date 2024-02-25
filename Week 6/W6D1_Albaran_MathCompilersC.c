/*
  ECE 101
  Math and Compilers in C
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
float var1 = 15.5;
float var2 = 10.2;
float ans;

int main () {
  ans = var1 + var2;
  printf("%0.2f + %0.2f equals %0.2f.\n", var1, var2, ans);
}