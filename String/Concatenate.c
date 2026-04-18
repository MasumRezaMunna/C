#include<stdio.h>

int main(){
    char str1[1000], str2[1000];
    int i,j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for ( i = 0; str1[i] != '\0'; i++);
    str1[i++] = ' ';
    

    for ( j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
    
    
}