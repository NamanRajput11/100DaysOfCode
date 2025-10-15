/*
Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int isSymmetric(int rows, int cols, int arr[rows][cols]);

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    int arr[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    if (isSymmetric(rows, cols, arr)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
int isSymmetric(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != arr[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}
