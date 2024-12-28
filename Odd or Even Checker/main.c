#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program checks if a given number is odd or even.
*/

// Function to check if a number is odd or even
void checkOddOrEven(int number)
{
    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}

int main()
{
    int inputNumber; // Variable to store user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Call the function to check if the number is odd or even
    checkOddOrEven(inputNumber);

    return 0; // End of the program
}
