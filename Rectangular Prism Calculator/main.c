#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program calculates the base area, lateral surface area,
    and total surface area of a rectangular prism, as well as its volume,
    based on user-provided dimensions (a, b, h).
*/

int main()
{
    int a, b, h; // Variables for dimensions of the rectangular prism

    // Prompt the user to enter the dimensions
    printf("Enter the dimensions of the rectangular prism (a, b, and h): ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    // Calculate areas and volume
    int baseArea = a * b;                 // Base area
    int lateralArea = 2 * (a * h + b * h); // Lateral surface area
    int totalArea = 2 * (a * b + a * h + b * h); // Total surface area
    int volume = a * b * h;               // Volume

    // Print the results
    printf("Rectangular prism calculations:\n");
    printf("\tBase Area: %d\n", baseArea);
    printf("\tLateral Surface Area: %d\n", lateralArea);
    printf("\tTotal Surface Area: %d\n", totalArea);
    printf("\tVolume: %d\n", volume);

    return 0; // End of the program
}
