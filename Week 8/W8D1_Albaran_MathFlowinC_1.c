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
double coneDiameter = 15.75;      // in feet
double coneHeight = 28;           // in feet
double coneVolume;                // in feet cubed

// Sphere global variables
double sphereDiameter = 12;       // in feet
double sphereVolume;              // in feet cubed

int main () {
  coneVolume = ((double) 1 / 3) * M_PI * ((coneDiameter / 2) * (coneDiameter / 2)) * coneHeight;
  printf("The volume of a cone that is %3.3f feet wide and %3.3f feet tall is %3.3f feet cubed.\n", coneDiameter, coneHeight, coneVolume);

  sphereVolume = ((double) 4 / 3) * M_PI * ((sphereDiameter / 2) * (sphereDiameter / 2) * (sphereDiameter / 2));
  printf("The volume of a sphere that is %3.3f feet wide is %3.3f feet cubed.\n", sphereDiameter, sphereVolume);
}