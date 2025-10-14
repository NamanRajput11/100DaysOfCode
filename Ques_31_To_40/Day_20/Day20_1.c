/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num, d, sum = 1;
    scanf("%d", &num);

    while (num > 0) {
        d = num % 10;
        if (d % 2 != 0) {
            sum = sum * d;
        }
        num = num / 10;
    }


    printf("Output: %d\n", sum);
    return 0;
}