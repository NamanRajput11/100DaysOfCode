/*
Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int diagonalTraversal(int rows, int cols, int arr[rows][cols], int result[]);

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int result[rows * cols];
    int size = diagonalTraversal(rows, cols, arr, result);

    printf("Diagonal traversal of the matrix:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

int diagonalTraversal(int rows, int cols, int arr[rows][cols], int result[]) {
    int index = 0;

    for (int d = 0; d < rows + cols - 1; d++) {
        int r, c;

        if (d < cols) {
            r = 0;
            c = d;
        } else {
            r = d - cols + 1;
            c = cols - 1;
        }

        while (r < rows && c >= 0) {
            result[index++] = arr[r][c];
            r++;
            c--;
        }
    }

    return index;
}
