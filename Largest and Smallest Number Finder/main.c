#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes three integer inputs from the user,
    determines the largest and smallest numbers among them, and prints the results.
*/

int main()
{
    int num1, num2, num3; // Variables to store the three input numbers

    // Prompt the user to enter three numbers
    printf("Please enter three numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Determine the largest and smallest numbers based on user input
    if(num1 > num2 && num1 > num3 && num2 > num3)
    {
        printf("The largest number is: %d\n", num1);
        printf("The smallest number is: %d", num3);
    }
    else if(num1 > num2 && num1 > num3 && num3 > num2)
    {
        printf("The largest number is: %d\n", num1);
        printf("The smallest number is: %d", num2);
    }
    else if(num2 > num1 && num2 > num3 && num1 > num3)
    {
        printf("The largest number is: %d\n", num2);
        printf("The smallest number is: %d", num3);
    }
    else if(num2 > num1 && num2 > num3 && num3 > num1)
    {
        printf("The largest number is: %d\n", num2);
        printf("The smallest number is: %d", num1);
    }
    else if(num3 > num1 && num3 > num2 && num1 > num2)
    {
        printf("The largest number is: %d\n", num3);
        printf("The smallest number is: %d", num2);
    }
    else if(num3 > num1 && num3 > num2 && num2 > num1)
    {
        printf("The largest number is: %d\n", num3);
        printf("The smallest number is: %d", num1);
    }

    return 0; // End of the program
}
