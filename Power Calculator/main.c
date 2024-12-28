#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the power of a number (a^b) using a custom function.
*/

// Function to calculate the power of a number
int power(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base; // Multiply the base exponent times
    }

    return result; // Return the calculated result
}

int main()
{
    int base, exponent, result;

    // Prompt the user to enter the base
    printf("Enter the base: ");
    scanf("%d", &base);

    // Prompt the user to enter the exponent
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function and store the result
    result = power(base, exponent);

    // Display the result
    printf("Result: %d\n", result);

    return 0; // End of the program
}
