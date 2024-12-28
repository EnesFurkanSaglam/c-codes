#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Description: This program demonstrates various string operations in C,
    including comparison, copying, and finding the length of strings.
*/

int main()
{
    char month[] = "December"; // String representing a month
    char string1[15] = "abcdef"; // First string for comparison
    char string2[15] = "ABCDEF"; // Second string for comparison

    // Compare two strings using strcmp (case-sensitive comparison)
    int result = strcmp(string1, string2);
    // Compare the first 5 characters of two strings using strncmp
    int result_2 = strncmp(string1, string2, 5);

    // Print the length of the string using strlen (does not include the null terminator)
    printf("The length of the string (excluding null terminator): %d\n", strlen(month));
    // Print the size of the string using sizeof (includes the null terminator)
    printf("The size of the string (including null terminator): %d\n", sizeof(month));

    // Print the comparison results
    printf("String comparison result (strcmp): %d\n", result);
    printf("Partial string comparison result (strncmp, first 5 characters): %d\n", result_2);

    // Copy one string to another using strcpy
    char greeting[] = "Hello";
    char copiedString[24];
    strcpy(copiedString, greeting); // Copying `greeting` into `copiedString`
    printf("Copied string: %s\n", copiedString);

    return 0; // End of the program
}
