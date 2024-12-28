#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program takes two arrays as input. The user specifies the size of each array (between 4 and 15),
                 and inputs the array elements ensuring all elements are less than 100.
*/

int main()
{
    int n, m;

    // Input the size of the first array
    printf("Enter the size of the 1st array (between 4 and 15): ");
    scanf("%d", &n);

    // Input the size of the second array
    printf("Enter the size of the 2nd array (between 4 and 15): ");
    scanf("%d", &m);

    // Validate array sizes
    if (n < 4 || n > 15 || m < 4 || m > 15)
    {
        printf("Error: Array sizes must be between 4 and 15.\n");
        return 1;
    }

    int array1[n];
    int array2[m];

    // Input elements for the first array
    printf("Enter %d elements for the 1st array (each less than 100):\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);

        // Validate each element
        if (array1[i] >= 100)
        {
            printf("Error: All elements must be less than 100.\n");
            return 1;
        }
    }

    // Input elements for the second array
    printf("Enter %d elements for the 2nd array (each less than 100):\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);

        // Validate each element
        if (array2[i] >= 100)
        {
            printf("Error: All elements must be less than 100.\n");
            return 1;
        }
    }

    // Print the arrays
    printf("1st array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("2nd array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0; // End of the program
}
