#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, specialChars = 0;
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until null terminator
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        } 
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // It's a letter, do nothing here
        }
        else if (ch != '\n') {  // exclude newline from special chars
            specialChars++;
        }

        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}
