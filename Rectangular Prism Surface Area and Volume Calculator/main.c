#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the surface area, volume,
                 and the surface-to-volume ratio of a rectangular prism
                 based on user-provided edge lengths.
*/

int main()
{
    // Prompt the user to input three different edge lengths
    printf("Enter three different edge lengths:\n");

    float a, b, c; // Variables for the edge lengths

    // Read the edge lengths from the user
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the surface area and volume
    float surfaceArea = 2 * (a * b + a * c + b * c); // Formula for surface area
    float volume = a * b * c;                       // Formula for volume

    // Display the edge lengths
    printf("Edge lengths:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    // Display the surface area, volume, and surface-to-volume ratio
    printf("Surface Area = %.2f\n", surfaceArea);
    printf("Volume = %.2f\n", volume);
    printf("Surface-to-Volume Ratio = %.2f\n", surfaceArea / volume);

    return 0; // End of the program
}
