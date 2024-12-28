#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes a positive integer as input and prints a countdown
                 from that number to 1 using a `while` loop.
*/

int main()
{
    int i;

    // Prompt the user to input a number
    printf("Enter a positive integer: ");
    scanf("%d", &i);

    // Ensure the input is valid
    if (i <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program if the input is invalid
    }

    // Countdown loop
    while (i > 0)
    {
        printf("%d ", i); // Print the current value of i
        i--;              // Decrement i
    }

    printf("\n"); // Move to a new line after the countdown

    return 0; // End of the program
}
