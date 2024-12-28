#include <stdio.h>
#include <stdlib.h>

/*
    Description: This program uses ASCII art to draw a simple house with a roof, walls, and a base.
    It utilizes separate functions for the roof, base, and walls for better modularity.
*/

// Function to draw the roof of the house
void roof()
{
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf(" /      \\\n");
    printf("/        \\\n");
}

// Function to draw the base of the house
void base()
{
    printf("==========\n");
}

// Function to draw the walls of the house
void walls()
{
    printf("|        |\n");
    printf("|        |\n");
    printf("|        |\n");
    printf("|        |\n");
    printf("|        |\n");
    printf("|        |\n");
}

int main()
{
    // Draw the roof
    roof();

    // Draw the first base
    base();

    // Draw the first set of walls
    walls();

    // Draw the second base
    base();

    // Draw the second set of walls
    walls();

    // Draw the final base
    base();

    return 0; // End of the program
}
