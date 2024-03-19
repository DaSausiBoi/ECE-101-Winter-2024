/*
  ECE 101
  Math and Flow in C Program 2
  March 4, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

// Global variables
int pixelArray1[5][5] = {               // smiley face
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 1, 0, 0}};
int pixelArray2[5][5] = {               // frowning face
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 0, 1, 0, 0}, 
    {0, 1, 0, 1, 0}};
int keebInput = 0;                      // holds keyboard input value from user

int main () {
    printf("Please enter 0 to see picture 1, 1 to see picture 2, or 2 to quit the program...\n");

    while (1) {                                                 // MAIN LOOP
        keebInput = getchar();

        if (keebInput != '2' && keebInput == '0') {             // array 1
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%2d ", pixelArray1[i][j]);          // prints array 1 in 5x5 manner
                }
                printf("\n");
            }
            printf("\nPlease enter 0 to see picture 1, 1 to see picture 2, or 2 to quit the program...\n");
        }
        else if (keebInput != '2' && keebInput == '1') {        // array 2
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%2d ", pixelArray2[i][j]);          // prints array 2 in 5x5 manner
                }
                printf("\n");
            }
            printf("\nPlease enter 0 to see picture 1, 1 to see picture 2, or 2 to quit the program...\n");
        }
        else if (keebInput == '2') {                            // SHUTDOWN
            break;
        }
    }
}