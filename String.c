// Write a program which will take a sentence as input and tell us how many words are there. [If user gives input “I love Bangladesh”, then the output should be: 3]

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
int i,word_count=1;
gets(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]==' ')

word_count++;
}
printf("%d\n",word_count);
return 0;
}