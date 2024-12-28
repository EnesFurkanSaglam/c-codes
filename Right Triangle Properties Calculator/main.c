// Enes Furkan SAGLAM 220202071

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Required for the sqrt function

/*
    Description: This program calculates the area, hypotenuse, and perimeter of a right triangle
                 based on the lengths of its two perpendicular sides provided by the user.
*/

int main()
{
    // Prompt the user for input
    printf("Enter the lengths of the two perpendicular sides of the right triangle:\n");

    float x, y; // Variables for the two perpendicular sides

    // Read the side lengths from the user
    scanf("%f", &x);
    scanf("%f", &y);

    // Calculate the hypotenuse
    float hypotenuse = sqrt(x * x + y * y);

    // Calculate the perimeter
    float perimeter = x + y + hypotenuse;

    // Calculate the area
    float area = (x * y) / 2;

    // Display the results
    printf("x = %.2f\ny = %.2f\n", x, y);
    printf("Area = %.2f\nPerimeter = %.2f\nHypotenuse = %.2f\n", area, perimeter, hypotenuse);

    return 0; // End of the program
}
