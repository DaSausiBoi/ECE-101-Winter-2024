/*
  ECE 101
  Math and Flow in C Program 2
  March 4, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
int pixelArray1[5][5] = {
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 1, 0, 0}};
int pixelArray2[5][5] = {
    {0, 0, 0, 0, 0}, 
    {0, 1, 0, 1, 0}, 
    {0, 0, 0, 0, 0}, 
    {0, 0, 1, 0, 0}, 
    {0, 1, 0, 1, 0}};
int keebInput = 0;          // holds keyboard input value from user

int main () {
    while (1) {
        printf("Please enter 0 to see picture 1, 1 to see picture 2, or 2 to quit the program...\n");
        keebInput = getchar();

        // Quits program if 2 is pushed
        if (keebInput != '2' && keebInput == '0') {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%2d ", pixelArray1[i][j]);
                }
                printf("\n");
            }
        }
        else if (keebInput != '2' && keebInput == '1') {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf("%2d ", pixelArray2[i][j]);
                }
                printf("\n");
            }
        }
        else if (keebInput == '2') {
            break;
        }
        else {
            printf("Please enter 0 to see picture 1, 1 to see picture 2, or 2 to quit the program...\n");
        }
    }
}