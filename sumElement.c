//Write a C program to read elements in an array and find the sum of array elements. C program to find sum of elements of the array. How to add elements of an array using for loop in C programming. Logic to find sum of array elements in C programming.

#include<stdio.h>

int main(){
    int arr[1000];
    int i, n, sum=0;

    printf("Enter size of the array :");
    scanf("%d", &n);

    printf("Enter %d elements in the array: \n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements of array = %d", sum);
    return 0;
    
    
}