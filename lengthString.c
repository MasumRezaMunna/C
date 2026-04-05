// Write a C program to find length of a string using loop. How to find length of a string without using in-built library function strlen() in C programming. Effective way to find length of a string without using strlen() function. How to find length of a string using strlen() string function.

#include<stdio.h>
#define MAX_SIZE 100

int main(){
    char text[MAX_SIZE];
    int i;
    int count = 0;

    printf("Enter any String: ");
    gets(text);

    for(i = 0; text[i] != '\0'; i++){
        count++;
    }

    printf("Length of '%s'  = %d", text, count);
    return 0;
}