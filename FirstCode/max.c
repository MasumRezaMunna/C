#include <stdio.h>
int main (){
int a,b;
printf("Enter two numbers:");
scanf("%d%d", &a, &b);
if(a>b){
    printf("%d is the maximum",a);
}else if(b>a){
printf("%d is the maximum",b);
}else{
printf("Two num are equal");
}
return 0;
}








