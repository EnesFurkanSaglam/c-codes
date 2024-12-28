#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the result of a quadratic equation
    in the form ax^2 + bx + c based on user-provided values for a, b, c, and x.
*/

int main()
{
    float a, b, c, x; // Variables for coefficients and the input value of x

    // Prompt the user to enter values for a, b, c, and x
    printf("Please enter values for a, b, c, and x:\n");
    scanf("%f", &a); // Input for coefficient a
    scanf("%f", &b); // Input for coefficient b
    scanf("%f", &c); // Input for constant c
    scanf("%f", &x); // Input for variable x

    // Calculate and display the result of the quadratic equation
    printf("The result of the equation is: %.2f", a * x * x + b * x + c);

    return 0; // End of the program
}
