/*
 *FILENAME: pa5p2.c
 *PROJECT: Traffic Lingt Controller
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 13th,2025
 *LAST MODIFIED: October 17th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h> 
#include <unistd.h> // For the sleep() function 
 
#define S1              1 
#define S2              2 
#define S3              3
 
int main() { 

    short state = S1; 
    char color[7];
    // Red corresponds to S1
    // Green corresponds to S2
    // Yellow corresponds to S3
    strcpy(color,"Red"); 
    
while (1) { 

    printf("Color of the light: %s\n",color);   //print out the current color of the current state

        switch (state) { 
            case 1: 
                sleep(7); // Stay in State 1 for seven seconds 
                state = S2; // Transition to State 2 
                strcpy(color,"Green");; // Color to Green
                break; 
            case 2: 
                sleep(5); // Stay in State 2 five seconds 
                state = S3; // Transition to State 3
                strcpy(color,"Yellow");; // Color to Yellow
                break; 
            case 3: 
                sleep(2); // Stay in State 3 for two seconds 
                state = S1; // Transition to State 1 
                strcpy(color,"Red"); // Color to Red
                break; 
        } 

    } 

    return 0; 

} 
