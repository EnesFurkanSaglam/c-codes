#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define constants and macros
#define PI 3.14 // Universal constant for Pi
#define circleArea(r) (PI * (r) * (r)) // Macro to calculate the area of a circle

int main()
{
    // Print predefined macros to display file, date, time, and line information
    printf("File: %s\n", __FILE__);   // Displays the current file name
    printf("Date: %s\n", __DATE__);   // Displays the current date
    printf("Time: %s\n", __TIME__);   // Displays the current time
    printf("Line: %d\n", __LINE__);   // Displays the current line number
    printf("STDC: %d\n", __STDC__);   // Displays whether the compiler adheres to the ANSI C standard (1 for yes)

    float radius, area;

    // Prompt the user to enter the radius of the circle
    printf("Please enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle using the macro
    area = circleArea(radius);

    // Display the calculated area
    printf("The area of the circle is: %.2f\n", area);

    return 0; // End of the program
}
