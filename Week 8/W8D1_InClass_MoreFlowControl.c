/*
  ECE 101
  More Flow Control
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
double temperatures[] = {34.2, 55.7, 69.2, -10, 40};

int numofTemps = sizeof(temperatures) / sizeof(double);

int main () {
    // Local variables
    int i;

    for (i = 0; i < numofTemps; i++){
        printf("%7.2f\n", temperatures[i]);
    }
}