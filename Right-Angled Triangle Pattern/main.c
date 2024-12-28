#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program generates a right-angled triangle pattern using
                 the character 'X'. The number of rows in the triangle is defined by the input.
*/

// Function to print a right-angled triangle
void triangle(int number)
{
    int i, j; // Loop variables

    // Outer loop for rows
    for (i = 0; i < number; i++)
    {
        // Inner loop for printing 'X' in each row
        for (j = 0; j <= i; j++)
        {
            printf("X");
        }
        printf("\n"); // Move to the next row
    }
}

int main(void)
{
    int sideLength;

    // Prompt the user to enter the side length of the triangle
    printf("Enter the side length of the triangle: ");
    scanf("%d", &sideLength);

    // Call the function to print the triangle
    triangle(sideLength);

    return 0; // End of the program
}
