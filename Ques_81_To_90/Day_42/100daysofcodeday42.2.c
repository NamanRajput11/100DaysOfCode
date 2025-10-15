#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // reads string with spaces

    // Convert each character to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII value difference
        }
        i++;
    }

    // Output the result
    printf("Uppercase string: %s", str);

    return 0;
}
