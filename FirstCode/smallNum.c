#include <stdio.h>

int main() {
    int arr[3][3] = {
        {5, 8, 2},
        {9, 1, 7},
        {6, 3, 4}
    };

    int sm = arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] < sm) {
                sm = arr[i][j];
            }
        }
    }

    printf("Smallest number = %d\n", sm);

    return 0;
}
