/*
  ECE 101
  Switch and Loops
  Feb 22, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
// int vendingMachineBehavior = 0;
int squaredInput = 25;
int sqrtAns;
int intermediateVals;

int main() {
  // Local variables

    while (intermediateVals < squaredInput) {
        intermediateVals = intermediateVals + sqrtAns + sqrtAns + 1;
        sqrtAns++;
    }
    printf("The square root of %d is %d.\n", squaredInput, sqrtAns);

    // Demo code 1
    /*  switch(vendingMachineBehavior) {
        case 1:
            printf("Waiting\n");
            break
        case 2:
            printf("Shutting down...\n");
    }   
    */

    return 0;
}