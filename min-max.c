// Dexter Mack
// Project 1
// Min Max
// a C program to read some numbers, find minimum, maximum, count, total, and average of numbers read. 
// Due: April 7th, 2024

// This "standard input/output" file contains useful functions I will need for input and output
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 256 // Max amount of characters you are able to use

int main(void)
{
    int number = 0; 
    int count = 0; 
    int minimum = 0;
    int maximum = 0; 
    int total = 0; 
    float average = 0.0; 
    int firstIteration = 1; // To handle the case when no number is read

    char input[BUFFER_SIZE];

    printf("Enter a number (enter 0 to stop): ");
    fgets(input, sizeof(input), stdin); // Max amount of characters you are able to use to prevent ovewrflow
    sscanf(input, "%d", &number); // Converts string to integer
    minimum = number;

    while (number != 0)
    {
        if (firstIteration) {
            minimum = number;
            maximum = number;
            firstIteration = 0;
        }
        
        if (number < minimum)           
            minimum = number;
        if (number > maximum)
            maximum = number;
        
        total += number;

        count++; // Increment count for each input number

         if (count == 1) {
            minimum = number;
            maximum = number;
        }

        printf("Enter a number (enter 0 to stop): ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d", &number);
    }

    printf("\n"); // New line for space

    if (firstIteration)
        printf("No number is read\n");
    else if (count == 0)
    {
        printf("No number is read\n");
    }
    else {
        average = (float)total / count; // Compute the average
        printf("Count = %d\n", count);
        printf("Minimum = %d\n", minimum);
        printf("Maximum = %d\n", maximum);
        printf("Total = %d\n", total);
        printf("Average is: %.2f\n", average); // Print the average with 2 decimal places

        printf("\n");

        printf("Dexter Mack - Project 1");

        printf("\n");

        printf("Main Output!");

        printf("\n");

        printf("Dexter Mack - End of Project 1");
    }

    return 0;
    
} 