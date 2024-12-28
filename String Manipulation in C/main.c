#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Description: This program demonstrates string copying and concatenation using functions
    like `strncpy`, `strcpy`, and `strcat`.
*/

int main()
{
    char source[] = "hello";    // Source string
    char destination[24] = ""; // Destination string initialized to an empty string

    // Copy the first 3 characters of `source` into `destination` using `strncpy`
    strncpy(destination, source, 3);
    destination[3] = '\0'; // Ensure the string is null-terminated
    printf("First 3 characters copied: %s\n", destination);

    char combined[100]; // Array to hold the concatenated string

    // Copy "my " into `combined` using `strcpy`
    strcpy(combined, "my ");
    // Concatenate strings using `strcat`
    strcat(combined, "name");
    strcat(combined, " is Enes");
    printf("Concatenated string: %s\n", combined);

    return 0; // End of the program
}
