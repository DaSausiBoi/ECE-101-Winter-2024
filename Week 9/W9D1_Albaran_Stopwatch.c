/*
  ECE 101
  Stopwatch
  March 11, 2024
  Loreto Albaran
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

// Global variables
int watchState = 1;

// Flow control variables
int waitFirst = 1;                              // sets flag for first wait since init
int timeFirst = 1;                              // sets flag for first timing since init

// Data variable
int startTime;
int stopTime;
int finalTime;
int timeMs;
int timeMin;
int timeSec;
int doubleSec;
int singleSec;

int main () {
  while (1) {                                   // MAIN LOOP
    if (watchState == 0) {                      // SHUT STATE
      printf("Shutting down...\n");
      Sleep(2000);                              // shutdown time simulation
      break;
    }
    else if (watchState == 1) {                 // INIT STATE
      printf("Initializing...\n");
      Sleep(2000);                              // init time simulation
      watchState = 2;                           // INIT --> WAIT
    }

    else if (watchState == 2) {                 // WAIT STATE
      if (waitFirst == 1) {                     // first run should print wait once
        printf("Waiting, press CTRL + ESC to shutdown or CTRL + SHIFT to start stopwatch...\n");
        waitFirst = 0;                          // prevents "wait" print after first run
      }

      if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_ESCAPE)) {        // WAIT --> SHUTDOWN
        watchState = 0;
      }
      else if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_RSHIFT)) {   // WAIT --> TIMING
        timeFirst = 1;
        startTime = clock();
        watchState = 3;
      }
      else {                                    // WAIT --> WAIT
        watchState = 2;
      }
    }

    else if (watchState == 3) {
      if (timeFirst == 1) {                     // first run should print timing once
        printf("Stopwatch started, press CTRL + ESC to shutdown or CTRL + SHIFT to stop...\n");
        timeFirst = 0;                          // prevents "timing" print after first run
      }

      if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_RSHIFT)) {        // TIMING --> WAIT
        waitFirst = 1;
        stopTime = clock();
        finalTime = stopTime - startTime;       // raw time data
        timeMs = finalTime;                     // time in ms

        while(timeMs >= 100)                    // displays the first two digits in finalTime which represent timeMs
        {
          timeMs = timeMs / 10;
        }

        timeSec = finalTime / CLOCKS_PER_SEC;   // time in sec
        timeMin = timeSec / 60;                 // time in min

        while (timeSec >= 60) {                 // if seconds are greater than or equal to 60 sec, then subtract value by 60
          timeSec = timeSec - 60;               // simulates 60 sec turning into 1 min
        }

        if (timeSec <= 9) {                     // when sec less than 9, prints sec with a 0 beforehand for formatting
          printf("Total time elapsed: %d:0%d.%d\n\n", timeMin, timeSec, timeMs);
          Sleep(1000);
        }
        else {                                  // else prints sec without the 0 beforehand for formatting
          printf("Total time elapsed: %d:%d.%d\n\n", timeMin, timeSec, timeMs);
          Sleep(1000);
        }
        watchState = 2;
      }
      else if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_ESCAPE)) {   // TIMING --> SHUTDOWN
        watchState = 0;
      }
      else {}                                   // TIMING --> TIMING
    }

    // "back alley"
    Sleep(100);                                 // master timer
  }
}