#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = NULL;
    for (int i = 0; i <= strlen(str); i++) {
        if ((wordStart == NULL) && (str[i] != ' ' && str[i] != '\0'))
            wordStart = &str[i];
        if ((wordStart != NULL) && (str[i] == ' ' || str[i] == '\0')) {
            reverse(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
