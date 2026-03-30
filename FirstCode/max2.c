#include<stdio.h>
int main(void){
int a,b,c;
printf("Enter three num;\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b && a>c){
    printf("%d is largest", a);
 if(b>a && b>c){
printf("%d is largest", b);
}

 if (a==b|| b==c || c==a){
printf("Tor nanirhda same chodas ken\n");
}
}
else{
printf("%d is largest", c);}
return 0;
}
