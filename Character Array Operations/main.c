#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program demonstrates basic operations with character arrays,
    including initialization, input, modification, and output of string data.
*/

int main()
{
    char name[] = {'c', 'a', 'n', 'a', 'n', '\0'}; // Character array with explicit initialization

    char name2[] = "canan"; // String initialization using shorthand syntax

    char inputString[100]; // Maximum characters for user input

    // Print the second string
    printf("%s\n", name2);

    // Prompt the user for a string input
    printf("Enter a character string: ");
    scanf("%s", inputString);

    // Display the entered string
    printf("You entered: %s\n", inputString);

    // Modify the third character of the second string to 'q'
    name2[2] = 'q';

    // Print the modified string
    printf("Modified string: %s\n", name2);

    return 0; // End of the program
}
