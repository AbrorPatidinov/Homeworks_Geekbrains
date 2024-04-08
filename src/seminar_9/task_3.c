#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to remove duplicate characters and spaces
void removeDuplicatesAndSpaces(char *str) {
    int len = strlen(str);
    char temp[1001]; // Assuming the string is no more than 1000 characters
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (j == 0 || str[i] != str[j - 1]) {
                temp[j++] = str[i];
            }
        }
    }
    temp[j] = '\0'; // Null-terminate the new string

    // Copy the modified string back to the original string
    strcpy(str, temp);
}

int main() {
    char inputStr[1001]; // Assuming the string is no more than 1000 characters
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the string from the file
    fgets(inputStr, sizeof(inputStr), inputFile);
    fclose(inputFile);

    // Remove duplicate characters and spaces
    removeDuplicatesAndSpaces(inputStr);

    // Write the modified string to a new file
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }
    fputs(inputStr, outputFile);
    fclose(outputFile);

    return EXIT_SUCCESS;
}