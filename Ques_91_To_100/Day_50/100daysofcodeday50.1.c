#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date in format dd/mm/yyyy: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    char day[3], month[3], year[5];
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    int m = atoi(month);
    printf("Converted: %s-%s-%s\n", day, months[m-1], year);

    return 0;
}
