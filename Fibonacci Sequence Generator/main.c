#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program generates the Fibonacci sequence up to the
    `n`th term, where `n` is provided by the user. The sequence starts with 0 and 1.
*/

// Function to generate the Fibonacci sequence
void fibo(int n, int first, int second, int next)
{
    // Print the first two numbers of the Fibonacci sequence
    printf("%d\n%d\n", first, second);

    // Generate and print the rest of the Fibonacci sequence
    for (int i = 3; i <= n; i++)
    {
        next = first + second; // Calculate the next term
        printf("%d\n", next);  // Print the term
        first = second;        // Update the first number
        second = next;         // Update the second number
    }
}

int main(void)
{
    int first = 0;  // First number of Fibonacci sequence
    int second = 1; // Second number of Fibonacci sequence
    int next, n;    // Variables for the next term and user input

    // Prompt the user for the number of terms
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    // Call the Fibonacci function
    fibo(n, first, second, next);

    return 0; // End of the program
}
