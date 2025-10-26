#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i;
    char repeat = '\0';

    printf("Enter a string (lowercase only): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 2) {
                repeat = str[i];
                break;
            }
        }
    }

    if (repeat)
        printf("First repeating lowercase letter: %c\n", repeat);
    else
        printf("No repeating lowercase letter found.\n");

    return 0;
}
