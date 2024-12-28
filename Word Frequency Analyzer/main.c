#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 1000
#define MAX_WORDS 100

// Function Prototypes
char* preprocessText(char* text);
float* calculateFrequencies(char* words[], int wordCount, int totalWords);
void displayFrequencies(char* words[], float* frequencies, int wordCount);

int main()
{
    char text[MAX_LENGTH];
    printf("Enter the text: ");
    fgets(text, MAX_LENGTH, stdin);

    char* words[MAX_WORDS];
    int wordCount = 0;

    // Preprocess the text and split it into words
    char* word = strtok(preprocessText(text), " ");
    while (word != NULL)
    {
        words[wordCount++] = word;
        word = strtok(NULL, " ");
    }

    // Calculate word frequencies
    float* frequencies = calculateFrequencies(words, wordCount, wordCount);

    // Display the words and their frequencies
    displayFrequencies(words, frequencies, wordCount);

    // Free allocated memory
    free(frequencies);

    return 0;
}

// Function to preprocess the text: convert to lowercase and remove non-alphabetic characters
char* preprocessText(char* text)
{
    char* cleanText = (char*) malloc(sizeof(char) * MAX_LENGTH);
    int index = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        char c = tolower(text[i]);
        if (isalpha(c)) // Keep letters
        {
            cleanText[index++] = c;
        }
        else if (isspace(c)) // Replace other characters with spaces
        {
            cleanText[index++] = ' ';
        }
    }

    cleanText[index] = '\0';
    return cleanText;
}

// Function to calculate word frequencies
float* calculateFrequencies(char* words[], int wordCount, int totalWords)
{
    float* frequencies = (float*) malloc(sizeof(float) * wordCount);

    for (int i = 0; i < wordCount; i++)
    {
        int count = 0;
        for (int j = 0; j < wordCount; j++)
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                count++;
            }
        }
        frequencies[i] = (float) count / totalWords;
    }

    return frequencies;
}

// Function to display unique words and their frequencies
void displayFrequencies(char* words[], float* frequencies, int wordCount)
{
    printf("Word\tFrequency\n");
    for (int i = 0; i < wordCount; i++)
    {
        int alreadyPrinted = 0;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                alreadyPrinted = 1;
                break;
            }
        }
        if (!alreadyPrinted)
        {
            printf("%s\t%.2f\n", words[i], frequencies[i]);
        }
    }
}
