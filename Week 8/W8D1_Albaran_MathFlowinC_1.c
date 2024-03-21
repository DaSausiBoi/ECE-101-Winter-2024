/*
  ECE 101
  Math and Flow in C Program 1
  March 4, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.1415926535         // overriding PI definition for this program only (M_PI is defined in math.h already)

// Cone global variables
double coneDiameter = 15.75;      // in inches
double coneHeight = 28;           // in inches
double coneVolume;                // in inches cubed

// Sphere global variables
double sphereDiameter = 15.75;    // in inches
double sphereVolume;              // in inches cubed

int main () {
  coneVolume = ((double) 1 / 3) * M_PI * ((coneDiameter / 2) * 
    (coneDiameter / 2)) * coneHeight;                      // dividing by 2 for radius
  printf("The volume of a cone that is %3.3f inches wide and %3.3f inches tall is %3.3f inches cubed.\n", coneDiameter, coneHeight, coneVolume);

  sphereVolume = ((double) 4 / 3) * M_PI * ((sphereDiameter / 2) * 
    (sphereDiameter / 2) * (sphereDiameter / 2));          // dividing by 2 for radius
  printf("The volume of a sphere that is %3.3f inches wide is %3.3f inches cubed.\n", sphereDiameter, sphereVolume);
}