#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to compare two characters for sorting
int compare(const void *a, const void *b) {
    return *(char*)a - *(char*)b;
}

// Function to find and print characters that appear only once in both words
void findUniqueChars(char *word1, char *word2) {
    int count1[26] = {0}, count2[26] = {0};
    char uniqueChars[26] = {0};
    int uniqueCount = 0;

    // Count occurrences in the first word
    for (int i = 0; word1[i] != '\0'; i++) {
        count1[tolower(word1[i]) - 'a']++;
    }

    // Count occurrences in the second word
    for (int i = 0; word2[i] != '\0'; i++) {
        count2[tolower(word2[i]) - 'a']++;
    }

    // Find characters that appear only once in both words
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            uniqueChars[uniqueCount++] = 'a' + i;
        }
    }

    // Sort the unique characters
    qsort(uniqueChars, uniqueCount, sizeof(char), compare);

    // Print the sorted unique characters
    for (int i = 0; i < uniqueCount; i++) {
        printf("%c ", uniqueChars[i]);
    }
    printf("\n");
}

int main() {
    char word1[101], word2[101];
    FILE *inputFile = fopen("../seminar_9/input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the two words from the file
    fscanf(inputFile, "%s %s", word1, word2);
    fclose(inputFile);

    // Find and print unique characters
    findUniqueChars(word1, word2);

    return 0;
}