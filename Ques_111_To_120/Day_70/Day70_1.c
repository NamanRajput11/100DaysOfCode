/*
Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.

Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>
#include <string.h>

void toSentenceCase(char str[]) {
    int i = 0;
    int capitalizeNext = 1; 

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            capitalizeNext = 1; 
        } else if (capitalizeNext && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A');
            }
            capitalizeNext = 0; 
        }
        i++;
    }
}

int main() {
    char str[256];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    toSentenceCase(str);
    printf("Output: %s\n", str);
    return 0;
}