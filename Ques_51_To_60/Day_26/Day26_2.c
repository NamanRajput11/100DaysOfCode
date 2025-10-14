/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int n = 5;

    for (int group = 1; group <= n; group = group + 2) {
        for (int i = 1; i <= group; i++) {
            printf("*\n");
        }
        printf("\n");
    }

    for (int group = n - 2; group >= 1; group = group - 2) {
        for (int i = 1; i <= group; i++) {
            printf("*\n");
        }
        if (group > 1) {
            printf("\n");
        }
    }

    return 0;
}
