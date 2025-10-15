#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate string length manually (excluding newline if present)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string in-place
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Print reversed string
    printf("Reversed string: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
