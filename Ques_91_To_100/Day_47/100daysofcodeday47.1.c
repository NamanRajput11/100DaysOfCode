#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0}, i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count[str1[i] - 'a']++;

    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count[str2[i] - 'a']--;

    for (i = 0; i < 26; i++)
        if (count[i] != 0) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }

    printf("Strings are anagrams!\n");
    return 0;
}
