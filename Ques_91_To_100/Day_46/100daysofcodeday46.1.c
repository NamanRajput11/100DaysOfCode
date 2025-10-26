#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // input with spaces

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if it's not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }

    result[j] = '\0'; // End of new string

    printf("String after removing vowels: %s\n", result);

    return 0;
}
