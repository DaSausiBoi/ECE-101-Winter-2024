/*
  ECE 101
  Keyboard Input
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
char myLetter = 0;

int main () {
    printf("Enter a character (or enter ~ to quit):\n");

    while (myLetter != '~'){
        myLetter = getchar();
        // Don't print if ~ or the retun button is pressed
        if (myLetter != '~' && myLetter != 10){
            printf("The ASCII code for %c is %d\n", myLetter, myLetter);
        }
    }
}