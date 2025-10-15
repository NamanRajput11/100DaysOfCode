/*
Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int search(int a[], int s, int sear);

int main() {
    int n, sear, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &sear);

    result = search(arr, n, sear);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Found at index %d\n", result);
    }

    return 0;
}

int search(int a[], int s, int sear) {
    for (int i = 0; i < s; i++) {
        if (a[i] == sear) {
            return i;
        }
    }
    return -1;
}
