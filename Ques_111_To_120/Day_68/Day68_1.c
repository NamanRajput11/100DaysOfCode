/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>
void findMissingNumber(int arr[], int n) {
    long long total = (long long)n * (n + 1) / 2; 
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int missingNumber = (int)(total - sum);
    printf("The missing number is: %d\n", missingNumber);
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (integers between 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMissingNumber(arr, n);
    return 0;
}
