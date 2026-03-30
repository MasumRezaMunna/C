
#include<stdio.h>
#define max_size 1000
int main(){
int arr[max_size];
int i, N;
printf("Enter size of array:");
scanf("%d", &N);
printf("Enter %d elements in the array:");
for(i=0; i<N; i++){
    scanf("%d", &arr[i]);
}
printf("\nElements in array are:");
for(i=0; i<N; i++){
        printf("%d", arr[i]);

}
return 0;
}
