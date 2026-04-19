#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

char i,j;
char str1[100], str2[100];


scanf(" %c", &i);
 scanf(" %s", str1);
 getchar();
 fgets(str2, sizeof(str2), stdin);


printf("%c\n", i);
printf("%s\n", str1);
printf("%s", str2);

    return 0;
}
