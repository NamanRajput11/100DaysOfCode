#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);
    for (int i = len - 1; i >= 0; i--)
        if (name[i] == ' ') { lastSpace = i; break; }

    printf("Formatted name: ");
    printf("%c.", name[0]);
    for (int i = 0; i < lastSpace; i++)
        if (name[i] == ' ' && name[i+1] != '\0')
            printf("%c.", name[i+1]);
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}
