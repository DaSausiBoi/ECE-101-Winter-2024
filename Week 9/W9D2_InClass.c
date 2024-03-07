/*
  ECE 101
  [TITLE]
  March 7, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables


// Defining structure
struct mapPoint {
    // This is a data structure that holds several items important on a map
    float lon;
    float lat;
    int citySizeRank;
    char placeName[];
};

struct mapPoint michigan[10];
struct mapPoint *current;

int main () {
    // Local variables
    
    current = &michigan[0];
    michigan[0].lon = 260.2;
    michigan[0].lat = 45.2;

    michigan[1].lon = 270.3;
    michigan[1].lat = 47;

    printf("Current position is %0.2f by %0.2f\n\n", (*current).lon, (*current).lat);
    return 0;
}