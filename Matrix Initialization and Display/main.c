#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program initializes a 6x6 matrix such that the diagonal elements
                 are set to 0, and all other elements are set to 1. The matrix is then displayed.
*/

int main()
{
    int matrix[6][6]; // 6x6 matrix
    int row, col;     // Loop variables for rows and columns

    // Initialize the matrix
    for (row = 0; row < 6; row++)
    {
        for (col = 0; col < 6; col++)
        {
            if (row == col)
            {
                matrix[row][col] = 0; // Diagonal elements set to 0
            }
            else
            {
                matrix[row][col] = 1; // Non-diagonal elements set to 1
            }
        }
    }

    // Display the matrix
    for (row = 0; row < 6; row++)
    {
        for (col = 0; col < 6; col++)
        {
            printf("%3d", matrix[row][col]); // Print each element with padding for alignment
        }
        printf("\n"); // New line after each row
    }

    return 0; // End of the program
}
