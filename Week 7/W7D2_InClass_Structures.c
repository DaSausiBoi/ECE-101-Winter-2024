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
unsigned short int logicalAnswer;

int main() {
  // Local variables

  if (mixerOn && releaseValveOpen){     // Runs if mixer about to blow up
    printf("Machine using power.\n");
  }
  else if (mixerOn) {     // Runs if mixer on
    printf("Mixer is on.\n");
  }
  else if(releaseValveOpen) {     // Runs if valve open
    printf("Release valve open.\n");
  }
  else {        // Runs if nothing true
    printf("Mixer is off, release valve closed.\n");
  }

  logicalAnswer = mixerOn && !releaseValveOpen;
  logicalAnswer ? printf("Mixing\n") : printf("Not mixing\n");
  return 0;
}