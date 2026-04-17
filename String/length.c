//Write a C program to find length of a string using loop. How to find length of a string without using in-built library function strlen() in C programming. Effective way to find length of a string without using strlen() function. How to find length of a string using strlen() string function.

//using strlen()

/*#include<stdio.h>
#include<string.h>

int main(){
    char text[1000];
    int length;

    printf("Enter any string : ");
    gets(text);

    length = strlen(text);

    printf("Length of '%s' = %d", text, length);;

    return 0;
}*/


//using for loop

#include<stdio.h>
#include<string.h>

int main(){
    char text[1000];
    int i, count=0;

    printf("Enter a string: ");
    gets(text);

    for ( i = 0; text[i] != '\0'; i++)
    {
        count ++;
    }

    printf("Length of '%s' = %d", text, count);

    return 0;
    
}