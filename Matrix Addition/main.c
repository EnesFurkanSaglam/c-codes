#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the element-wise sum of two 3x5 matrices
                 and displays the resulting matrix.
*/

int main()
{
    // Initialize two 3x5 matrices
    int matrixA[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int matrixB[3][5] = {{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
    int sumMatrix[3][5]; // Matrix to store the result of the addition

    int i, j; // Loop variables

    // Perform element-wise addition of the two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Display the resulting matrix
    printf("The resulting matrix after addition is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d", sumMatrix[i][j]); // Print each element with padding for alignment
        }
        printf("\n"); // Move to the next row
    }

    return 0; // End of the program
}
