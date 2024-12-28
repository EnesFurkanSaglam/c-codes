#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the absolute value of an integer input by the user.
    It uses a helper function to determine whether the input number is negative.
*/

// Function to check if a number is negative
int is_negative(int num)
{
    if (num < 0)
    {
        return 1; // Returns 1 if the number is negative
    }
    else
    {
        return 0; // Returns 0 if the number is non-negative
    }
}

int main()
{
    int input, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &input);

    // Check if the number is negative
    result = is_negative(input);

    // Print the absolute value of the number
    if (result == 1)
    {
        printf("The absolute value is: %d\n", -input);
    }
    else
    {
        printf("The absolute value is: %d\n", input);
    }

    return 0; // End of the program
}
