#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; j++)
            leftSum += arr[j];
        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];

        if (leftSum == rightSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
    }

    printf("-1 (No pivot index found)\n");
    return 0;
}
