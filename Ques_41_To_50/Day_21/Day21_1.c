/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <math.h>
#include <stdio.h>

int main() {
    int num, first_digit, last_digit, num_digits = 0, temp_num, swapped_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp_num = num;
    last_digit = temp_num % 10;

    while (temp_num > 0) {
        first_digit = temp_num % 10;
        temp_num = temp_num / 10;
        num_digits++;
    }
    if (num_digits == 1) {
        swapped_num = num;
    } else {
        swapped_num = last_digit;
        for (int i = 1; i < num_digits - 1; i++) {
            swapped_num = swapped_num * 10 + (num / (int)pow(10, num_digits - i - 1)) % 10;
        }
        swapped_num = swapped_num * 10 + first_digit;
    }

    printf("%d\n", swapped_num);

    return 0;
}