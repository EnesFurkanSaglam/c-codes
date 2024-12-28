#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program generates a diamond shape (baklava pattern)
    using asterisks ('*'). The user specifies the size of the top half of
    the diamond, and the program generates the full diamond.
*/

// Function to generate the top part of the diamond
int top(int size)
{
    int row = 0; // Keeps track of the current row
    int spaces, stars;

    for (int remainingRows = size; remainingRows > 0; remainingRows--)
    {
        // Print leading spaces
        for (spaces = 1; spaces < remainingRows; spaces++)
        {
            printf(" ");
        }

        row++;
        stars = 2 * row - 1; // Calculate the number of stars for this row

        // Print stars
        for (; stars > 0; stars--)
        {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }
    return 0;
}

// Function to generate the bottom part of the diamond
int bottom(int size)
{
    int row = 1; // Keeps track of the current row
    int spaces, stars;

    for (int remainingRows = size; remainingRows > 0; remainingRows--)
    {
        // Print leading spaces
        for (spaces = row; spaces > 0; spaces--)
        {
            printf(" ");
        }

        row++;
        stars = 2 * (remainingRows - 1) - 1; // Calculate the number of stars for this row

        // Print stars
        for (; stars > 0; stars--)
        {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }
    return 0;
}

int main()
{
    int size;

    // Prompt the user for the size of the top half of the diamond
    printf("Enter the size of the top half of your diamond: ");
    scanf("%d", &size);

    top(size);   // Generate the top part of the diamond
    bottom(size); // Generate the bottom part of the diamond

    return 0; // End of the program
}
