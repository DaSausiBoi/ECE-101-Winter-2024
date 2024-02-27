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
  float moment = (initialVelocity * deltaTime) + ((1 / 2) * acceleration * (deltaTime * deltaTime)) + xInitial;
  xFinal = moment;
  printf("%0.2f", xFinal);

  // printf("The final position of the car that started at %d meters going %0.2f m/s^2 over %d seconds is %0.2f meters away.\n", 
    // xInitial, acceleration, deltaTime, xFinal);
}