#include <stdio.h>

int main(){
    int a,sum=0;
    scanf("%d",&a);
    for(;a!=0; a = a / 10){
        sum += a %10;
    }
    printf("%d",sum);
}
