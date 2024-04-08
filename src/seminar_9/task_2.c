#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to replace 'a' with 'b' and 'b' with 'a'
void replaceAB(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            str[i] = (isupper(str[i]) ? 'B' : 'b');
        } else if (tolower(str[i]) == 'b') {
            str[i] = (isupper(str[i]) ? 'A' : 'a');
        }
    }
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

    // Replace 'a' with 'b' and 'b' with 'a'
    replaceAB(inputStr);

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