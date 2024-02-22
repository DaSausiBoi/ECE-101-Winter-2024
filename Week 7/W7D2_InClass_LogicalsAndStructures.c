/*
  ECE 101
  Logicals and Structures
  Feb 22, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
short int myInt = 2;
short int myInt2 = 1000000000;
int myInt3 = 1000000000;
int myDataTypeSize;

char myChar = 'A';
char newLetter;
char myLunchSpot[] = {'E', 'i', 'n'};
char myLunchSpot2 = 'Einstein';

float temperatures[] = {32.4, 40.2, 50, 72, 80, 82};

int main() {
  // Local variables
  newLetter = myChar++;

  myDataTypeSize = sizeof(temperatures);
  printf("The size of the data type chosen is: %d\n", myDataTypeSize);

  printf("The original letter was %c. The new letter is %c.\n", myChar, newLetter);
  return 0;
}