#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes an integer input from the user
    and prints numbers starting from 0, incrementing by 17,
    until it reaches or exceeds the given number.
*/

int main()
{
    int limit, i = 0; // Variables to store the input number and the counter

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &limit);

    // Loop to print numbers incremented by 17
    while(i <= limit)
    {
        printf("%d ", i); // Print the current value of 'i'
        i = i + 17;       // Increment 'i' by 17
    }

    return 0; // End of the program
}
