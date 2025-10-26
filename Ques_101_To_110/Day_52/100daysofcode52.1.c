#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;  // first element >= x
        }
    }

    printf("Ceil index: %d\n", index);
    return 0;
}
