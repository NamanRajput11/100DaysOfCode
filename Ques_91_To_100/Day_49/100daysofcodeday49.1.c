#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++)
        if (name[i] == ' ' && name[i+1] != '\0')
            printf("%c.", name[i+1]);

    printf("\n");
    return 0;
}
