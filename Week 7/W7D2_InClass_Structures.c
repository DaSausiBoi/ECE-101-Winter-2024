/*
  ECE 101
  Structures
  Feb 22, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>

// Global variables
unsigned short int mixerOn = 1;      // 0 is false, 1 is true
unsigned short int releaseValveOpen = 1;

int main() {
  // Local variables

  if (mixerOn){     // Runs if mixer is on
    printf("Mixer is on.\n");
  }
  else if(releaseValveOpen) {     // Runs is valve open
    printf("Release valve open.\n");
  }
  else {        // Runs if nothing is true
    printf("Mixer is off.\n");
  }
  return 0;
}