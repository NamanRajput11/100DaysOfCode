/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define ALPHABET_SIZE 26

int areAnagrams(const char *s, const char *t) {
    int countS[ALPHABET_SIZE] = {0};
    int countT[ALPHABET_SIZE] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        countT[t[i] - 'a']++;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (countS[i] != countT[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[MAX_LEN], t[MAX_LEN];

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}