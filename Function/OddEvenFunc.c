//Write a C program to input a number from user and check whether given number is even or odd using functions. How to check even or odd using functions in C programming. Write a function in C programming to check even or odd.

#include<stdio.h>

int isEven(int num){
    return !(num & 1);
}

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(isEven(num)){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }

    return 0;
}