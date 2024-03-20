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
#include <time.h>

// Global variables
char light = 'I';                           // default state initializing
int timer = 0;                              // interval timer for state monitoring
// int interval = 0;                           // Time each light stays on
int startTime;

// Function to update the console display based on the current state
void updateConsole(char light) {
  printf("N/S: %c\n", light);
}

// int currentTimer(int startingTime) {
//     int stopTime = clock();
//     int finalTime = stopTime - startingTime;
//     int timeSec = finalTime / CLOCKS_PER_SEC;   // time in sec
//     return timeSec;
// }

int main () {
    startTime = clock();
    printf("%c\n", light);

    while (1) {

        // Check for user input
        if (_kbhit()) {
            if (GetAsyncKeyState(VK_ESCAPE)) { // Escape key
                printf("Shutting down...\n");
                break;
            } 
            else if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_LCONTROL) || GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_RCONTROL)) { // Ctrl + Any key
                printf("Switching to night mode...\n");
                light = 'R'; // Set all lights to Red
                updateConsole(light);
                // interval = 15; // 1.5 seconds in 100 ms increments
            }
        }

        // Update the state based on the timer
        switch (light) {
            case 'I': // Initializing
                if (timer == 10) {
                    light = 'R'; // Start with Red for N/S
                    updateConsole(light);
                    // interval = 40; // 4 seconds in 100 ms increments
                }
                break;
            case 'R': // Red
                if (timer == 40) {
                    light = 'Y'; // Switch to Yellow after 4 seconds
                    updateConsole(light);
                    // interval += 10; // 2 seconds in 100 ms increments
                }
                break;
            case 'Y': // Yellow
                if (timer == 50) {
                    light = 'G'; // Switch to Green after 2 seconds
                    updateConsole(light);
                    // interval += 40; // 4 seconds in 100 ms increments
                }
                break;
            case 'G': // Green
                if (timer == 90) {
                    light = 'R'; // Switch back to Red after 4 seconds
                    updateConsole(light);
                    // interval += 10; // 2 seconds in 100 ms increments
                }
                break;
            default:
                break;
        }

        // Handle night mode
        if (light == 'R') {
            if (timer % 30 == 0) { // 1.5 seconds interval
                updateConsole(light);
            }
        }

        // Reset timer after 100 ms
        timer = (timer + 1) % 100;
        // timer = currentTimer(startTime);
    
        // MASTER TIMER, DO NOT TOUCH
        Sleep(100);
    }
}