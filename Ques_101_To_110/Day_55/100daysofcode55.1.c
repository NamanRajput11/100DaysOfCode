#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int majority = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                count++;
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    if (majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("-1 (No majority element found)\n");

    return 0;
}
