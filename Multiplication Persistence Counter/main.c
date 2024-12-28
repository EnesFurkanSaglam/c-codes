#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the "multiplicative persistence" of numbers
    from 1 to 99. Multiplicative persistence is the number of times you multiply the
    digits of a number until a single-digit result is obtained.
*/

int main()
{
    int i; // Loop variable for numbers
    int totalCount = 0; // Counter for total iterations

    // Iterate through numbers from 1 to 99
    for (i = 1; i < 100; i++)
    {
        int currentNumber = i; // Start with the current number
        int stepCount = 0; // Counter for steps for each number

        // Loop until the number is reduced to a single digit
        while (currentNumber >= 10)
        {
            int product = 1; // Initialize product to calculate digit multiplication

            // Multiply the digits of the current number
            while (currentNumber > 0)
            {
                product *= currentNumber % 10; // Multiply the last digit
                currentNumber /= 10;          // Remove the last digit
            }

            currentNumber = product; // Update currentNumber to the product
            stepCount++; // Increment step counter
        }

        totalCount += stepCount; // Add steps for this number to the total count
    }

    // Print the total count of steps for all numbers
    printf("Total multiplicative persistence steps from 1 to 99: %d\n", totalCount);

    return 0; // End of the program
}
