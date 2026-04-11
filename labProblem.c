// take 2 array, merge them and find the largest and second largest value

#include <stdio.h>

int main(){

int a[3], b[3], c[6];
int i;

printf("Enter 3 values for array A :\n");
for ( i = 0; i < 3; i++)
{
    scanf("%d", &a[i]);
}

printf("Enter 3 values for array B :\n");
for ( i = 0; i < 3; i++)
{
    scanf("%d", &b[i]);
}


for ( i = 0; i < 3; i++)
{
    c[i] = a[i];
}
for ( i = 0; i < 3; i++)
{
    c[i + 3] = b[i];
}

printf("Merged Array : {");
for ( i = 0; i < 6; i++)
{
    printf("%d", c[i]);
    if (i != 5)     
    {
        printf(", ");
    }
    
}
printf("}\n");



int max = c[0], second = -99999;

for ( i = 1; i < 6; i++)
{
    if (c[i] > max)
    {
        second = max;
        max = c[i];
    }
    else if (c[i] > second && c[i] != max){
        second = c[i];
    }
    
}


printf("Max = %d\n", max);
printf("Second Max = %d\n", second);

return 0;

}