#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;                // sum 1→x
        int rightSum = (n * (n + 1) / 2) - (x * (x - 1) / 2); // sum x→n

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1 (No pivot integer found)\n");
    return 0;
}
