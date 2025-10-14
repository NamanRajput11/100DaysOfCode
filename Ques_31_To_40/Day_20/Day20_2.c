/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

(Loops without Arrays/Strings)

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main() {
    printf("Enter a binary number: ");
    int num, d, rev = 0, place = 1;
    scanf("%d", &num);

    while (num > 0) {
        d = num % 10;
        if (d == 0) {
            d = 1;
        } else {
            d = 0;
        }
        rev = rev + d * place;
        place = place * 10;
        num = num / 10;
    }

    printf("%d\n", rev);
    return 0;
}
