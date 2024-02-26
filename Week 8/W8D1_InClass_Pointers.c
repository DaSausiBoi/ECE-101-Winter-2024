/*
  ECE 101
  Pointers
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
int myArray[] = {2, 4, 6, 8, 10};

int *ptr = &myArray[0];
int i;      // Loop iteration counter
int length = sizeof(myArray) / sizeof(int);

int main () {
    printf("An int is %d bytes\n\n", sizeof(int));

    for (i = 0; i < length; i++){
        printf("The address of the array[%d] is %p\n", i, &myArray[i]);
        printf("ptr has the value %p\n", ptr);
        printf("Array[%d] holds %d and *ptr points %d\n\n", i, myArray[i], *ptr);
        ptr++;      // moves ptr one 'int' length further in memory
    }
}