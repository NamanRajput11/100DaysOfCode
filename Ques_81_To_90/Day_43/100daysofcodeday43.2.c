#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;
    int isPalindrome = 1;  // assume true

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length excluding newline
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome by comparing characters from ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
