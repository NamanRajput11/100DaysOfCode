#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads spaces too

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for simpler checking
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
