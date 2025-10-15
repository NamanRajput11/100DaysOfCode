/*
Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int mul(int rows1, int cols1, int arr1[rows1][cols1], int rows2, int cols2, int arr2[rows2][cols2]);

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &cols1);
    int arr1[rows1][cols1];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter number of rows for second matrix: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return 1;
    }

    int arr2[rows2][cols2];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Matrix after multiplication:\n");
    mul(rows1, cols1, arr1, rows2, cols2, arr2
    );
    return 0;
}

int mul(int rows1, int cols1, int arr1[rows1][cols1], int rows2, int cols2, int arr2[rows2][cols2]) {
    int result[rows1][cols2];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}