#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program checks whether three given sides satisfy the
                 triangle inequality theorem, which is necessary for the sides
                 to form a valid triangle.
*/

int main()
{
    int a, b, c;

    // Prompt the user to input the three sides of the triangle
    printf("Enter the first side of the triangle: ");
    scanf("%d", &a);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &b);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &c);

    // Check the triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The given sides satisfy the triangle inequality.\n");
    }
    else
    {
        printf("The given sides do NOT satisfy the triangle inequality.\n");
    }

    return 0; // End of the program
}
