/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); 
        }
        fputc(ch, outputFile);
    }
    printf("Text conversion completed. Check output.txt for results.\n");
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}