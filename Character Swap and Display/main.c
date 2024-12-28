#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes two characters as input, swaps their display order,
                 and prints them using `putchar`.
*/

int main()
{
    int firstChar, secondChar;

    // Prompt the user to enter two characters
    printf("Enter two characters:\n");

    // Read the first character
    firstChar = getchar();
    // Clear the input buffer to handle the newline character
    while (getchar() != '\n');

    // Read the second character
    secondChar = getchar();
    // Clear the input buffer again
    while (getchar() != '\n');

    // Display the characters in swapped order
    printf("You entered (swapped order):\n");
    putchar(secondChar);
    printf("\n");
    putchar(firstChar);

    return 0; // End of the program
}
