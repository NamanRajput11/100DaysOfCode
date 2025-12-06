/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int n1;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    int n2;
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int mergedArr[n1 + n2];
    mergeSortedArrays(arr1, n1, arr2, n2, mergedArr);
    printf("Merged sorted array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", mergedArr[i]);
    printf("\n");
    return 0;
}