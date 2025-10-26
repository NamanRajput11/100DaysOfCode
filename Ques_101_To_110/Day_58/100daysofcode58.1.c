#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int ans[n];

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        ans[i] = prod;
    }

    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
