#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the greatest common divisor (GCD)
    and least common multiple (LCM) of two user-provided integers using a
    custom function for GCD.
*/

// Function to calculate the GCD of two numbers
int func(int a, int b)
{
    int gcd = 1; // Initialize GCD as 1 (minimum possible GCD)

    if (a > b)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i; // Update GCD when both numbers are divisible by i
            }
        }
    }
    else if (b > a)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i; // Update GCD when both numbers are divisible by i
            }
        }
    }
    else
    {
        return a; // If the numbers are equal, GCD is the number itself
    }

    return gcd; // Return the final GCD
}

int main()
{
    int a; // Variable for the first number
    int b; // Variable for the second number
    int c; // Variable for the GCD

    // Prompt the user to input two numbers
    printf("Input two numbers:\n");
    scanf("%d%d", &a, &b);

    // Calculate GCD using the func() function
    c = func(a, b);

    // Display the GCD
    printf("GCD: %d\n", c);

    // Calculate and display the LCM using the formula: LCM = (a * b) / GCD
    int lcm = (a * b) / c;
    printf("LCM: %d\n", lcm);

    return 0; // End of the program
}
