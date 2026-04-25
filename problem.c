#include <stdio.h>

int main() {
    int n, i, fastestTime, position = 1;
    printf("Enter number of participants: ");
    scanf("%d", &n);

    int times[n];
    for(i = 0; i < n; i++) {
        printf("Enter time for Participant %d: ", i + 1);
        scanf("%d", &times[i]);
    }

    fastestTime = times[0];
    for(i = 1; i < n; i++) {
        if(times[i] < fastestTime) {
            fastestTime = times[i];
            position = i + 1; // 1-indexed position
        }
    }

    printf("Fastest Time = %d\n", fastestTime);
    printf("Position = %d\n", position);
    return 0;
}