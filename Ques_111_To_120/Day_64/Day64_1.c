/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int longestSubstring(char s[]) {
    int lastIndex[256];
    int i, start = 0, maxLen = 0;

    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];

        if (lastIndex[c] >= start) {
            start = lastIndex[c] + 1;
        }

        lastIndex[c] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("%d\n", longestSubstring(s));

    return 0;
}
