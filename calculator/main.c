#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day == 6 || day == 7) {
        printf("Weekend\n");
    }
    else if (day >= 1 && day <= 5) {
        printf("Weekday\n");
    }
    else {
        printf("Invalid day number\n");
    }

    return 0;
}
