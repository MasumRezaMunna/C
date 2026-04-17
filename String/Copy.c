//Write a C program to copy one string to another string using loop. C program to copy one string to another without using inbuilt library function strcpy(). How to copy one string to another without using inbuilt string library function in C programming. Effective logic to copy strings in C programming. How to copy one string to another string using strcpy() function in C program.

#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char text1[1000];
    char text2[1000];

    printf("Enter any string :");
    gets(text1);

    // for ( i = 0; text1[i] != '\0'; i++)
    // {
    //     text2[i] = text1[i];
    // }

    // text2[i] = '\0';

    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    // printf("Total characters copied = %d\n", i);

    return 0;
    
}