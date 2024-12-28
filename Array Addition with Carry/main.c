#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program performs digit-wise addition of two arrays
                 (representing numbers) with carry propagation and stores
                 the result in a third array.
*/

int main()
{
    int A[5] = {1, 2, 3, 4, 5}; // First number represented as an array
    int B[5] = {9, 0, 0, 3, 7}; // Second number represented as an array
    int C[6];                   // Array to store the result (1 extra space for carry)
    int carry = 0;              // Variable to store the carry value

    // Perform addition from the least significant digit (rightmost) to the most significant digit
    for (int i = 4; i >= 0; i--)
    {
        // Add corresponding digits from A and B, along with the carry
        C[i + 1] = (A[i] + B[i] + carry) % 10; // Store the digit in the result
        carry = (A[i] + B[i] + carry) / 10;    // Update the carry
    }

    // Handle the final carry, if any
    C[0] = carry;

    // Print the resulting array as a number
    printf("Resulting sum: ");
    for (int j = 0; j < 6; j++)
    {
        printf("%d", C[j]);
    }
    printf("\n");

    return 0; // End of the program
}
