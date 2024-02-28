/*
  ECE 101
  Math and Compilers in C
  Feb 26, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
float xFinal;                       // solving for in meters
float xInitial = 0;                 // in meters
float finalVelocity = 16.7;         // in m/s
float initialVelocity = 0;          // in m/s
float acceleration = 2.08;          // in m/s^2
float deltaTime = 8;                // in sec

int main () {
  xFinal= (initialVelocity * deltaTime) + (0.5 * acceleration * (deltaTime * deltaTime)) + xInitial;

  printf("The final position of the car that started at %0.2f meters going %0.2f m/s^2 over %0.2f seconds is %0.2f meters away.\n", 
    xInitial, acceleration, deltaTime, xFinal);
}