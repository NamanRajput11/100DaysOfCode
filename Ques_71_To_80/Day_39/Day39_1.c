/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int Check(int rows, int cols, int arr[rows][cols]);

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
    if (Check(rows, cols, arr)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
int Check(int rows, int cols, int arr[rows][cols]) {
    int diagElements[rows];
    for (int i = 0; i < rows; i++) {
        diagElements[i] = arr[i][i];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagElements[i] == diagElements[j]) {
                return 0; 
            }
        }
    }
    return 1; 
}