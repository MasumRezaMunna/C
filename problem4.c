#include <stdio.h>

void timeConversion(int minute) {
    int hours = minute / 60;        
    int remainingMinutes = minute % 60;
    
    printf("%d hours %d minutes\n", hours, remainingMinutes);
}

int main() {
    int totalMinutes;
    
    printf("Enter Minutes: ");
    scanf("%d", &totalMinutes);
        timeConversion(totalMinutes);
    
    
    return 0;
}