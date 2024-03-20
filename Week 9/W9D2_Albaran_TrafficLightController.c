/*
  ECE 101
  Time-Based Traffic Light Controller
  March 24, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

// Global variables
int lightState = 1;

// Flow control variables
int waitFirst = 1;                              // sets flag for first wait since init
int timeFirst = 1;                              // sets flag for first timing since init

// Starts the N/S stoplight sequence
void stoplight() {
  printf("R\n");
  Sleep(4000);
  printf("R\n");
  Sleep(2000);
  printf("G\n");
  Sleep(4000);
  printf("Y\n");
  Sleep(2000);
}

// Starts the night mode stoplight sequence
void stoplightNightMode() {
  printf("R\n");
  Sleep(1500);
  printf("\"OFF\"\n");
  Sleep(1500);
}

int main () {
  while (1) {                                   // MAIN LOOP
    if (lightState == 0) {                      // SHUT STATE
      printf("Shutting down...\n");
      Sleep(1000);                              // shutdown time simulation
      break;
    }
    else if (lightState == 1) {                 // INIT STATE
      printf("I\n");
      Sleep(1000);                              // init time simulation
      lightState = 2;                           // INIT --> WAIT
    }

    else if (lightState == 2) {                 // WAIT STATE
      while (!GetAsyncKeyState(VK_ESCAPE)) {
        while(!GetAsyncKeyState(VK_CONTROL) && !GetAsyncKeyState(VK_LCONTROL) || !GetAsyncKeyState(VK_CONTROL) && !GetAsyncKeyState(VK_RCONTROL)) {
          stoplight();
        }
        lightState = 0;
      }
      lightState = 0;
    }

    /*else if (lightState == 3) {
      if (timeFirst == 1) {                     // first run should print timing once
        printf("Stopwatch started, press CTRL + ESC to shutdown or CTRL + SHIFT to stop...\n");
        timeFirst = 0;                          // prevents "timing" print after first run
      }

      if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_RSHIFT)) {        // TIMING --> WAIT
        waitFirst = 1;
        
        lightState = 2;
      }
      else if (GetAsyncKeyState(VK_ESCAPE)) {   // TIMING --> SHUTDOWN
        lightState = 0;
      }
      else {}                                   // TIMING --> TIMING
    }*/

    // "back alley" DO NOT TOUCH
    Sleep(100);                                 // master timer
  }
}