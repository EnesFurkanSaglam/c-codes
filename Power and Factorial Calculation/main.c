#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Required for the pow() function

/*
    Description: This program calculates the value of (x^n) / (2n-1)! where:
                 - `x^n` is x raised to the power n.
                 - `(2n-1)!` is the factorial of (2n-1).
*/

// Function to calculate the power of x^n
int power(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x; // Multiply x n times
    }
    return result;
}

// Function to calculate the factorial of (2n-1)
int factorial(int n)
{
    int result = 1;
    int num = 2 * n - 1; // Calculate (2n-1)
    for (int i = num; i > 0; i -= 2) // Multiply odd numbers down to 1
    {
        result *= i;
    }
    return result;
}

int main()
{
    int x, n;

    // Prompt the user to input values for x and n
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Calculate power and factorial
    int powerResult = power(x, n);
    int factorialResult = factorial(n);

    // Calculate the final result
    float result = (float)powerResult / factorialResult;

    // Print the result
    printf("Result: %.2f\n", result);

    return 0; // End of the program
}
