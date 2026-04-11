//Write a C program to find largest and second largest element in an array. How to find second largest element in array in C programming language. Logic to find second largest element in array in C program.

#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 1000

int main(){
    
    int arr[MAX_SIZE], size, i;
   

    printf("Enter size of the array(1-1000): ");
    scanf("%d", &size);

    printf("Enter elements in the array : ");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }


     int max1 = INT_MIN, max2 = INT_MIN;

     for ( i = 0; i < size; i++)
     {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];

        }
        else if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
        
     }

     printf("First largest = %d \n", max1);
     printf("Second largest = %d \n", max2);

     return 0;
     
    
}