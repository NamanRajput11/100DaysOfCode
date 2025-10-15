/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int deleteElement(int arr[], int n, int element);

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter element to delete: ");
    scanf("%d", &element);
    n = deleteElement(arr, n, element);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int deleteElement(int arr[], int n, int element) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            break;
        }
    }
    if (i == n) {
        return n; 
    }
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}