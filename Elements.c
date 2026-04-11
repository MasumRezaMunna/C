//Write a C program to declare, initialize, input elements in array and print array. How to input and display elements in an array using for loop in C programming. C program to input and print array elements using loop.


#include<stdio.h>

int main() {
    int i,N, arr[1000];

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for ( i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}