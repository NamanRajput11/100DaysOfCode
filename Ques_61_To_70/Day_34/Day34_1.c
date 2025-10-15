/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int insertAtPosition(int arr[], int n, int pos, int element);

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, element;
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &element);
    n = insertAtPosition(arr, n, pos, element);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int insertAtPosition(int arr[], int n, int pos, int element) {
    if (pos < 0 || pos > n) {
        return n; 
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[pos] = element;
    return n + 1;
}