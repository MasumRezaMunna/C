#include <stdio.h>

void showTable(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    showTable(num);
    return 0;
}