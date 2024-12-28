#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes a single character as input and determines
                 whether it is a vowel or a consonant using a `switch` statement.
*/

int main()
{
    char letter;

    // Prompt the user to input a letter
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Check if the letter is a vowel or consonant
    switch (letter)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("The letter is a vowel.\n");
            break;

        default:
            printf("The letter is a consonant.\n");
            break;
    }

    return 0; // End of the program
}
