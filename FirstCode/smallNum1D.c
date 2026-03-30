
#include <stdio.h>

int main() {
    int arr[] = {5, 8, 2, 9, 1, 7};
    int n = 6;

    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Smallest number = %d\n", min);

    return 0;
}
