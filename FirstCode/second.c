#include<stdio.h>
int x,y,z;
int main(){
printf("Enter the value of x,y,z");
scanf("%d%d%d", &x,&y,&z);
if(x>y && x>z){
    printf("The largest number is %d:", x);
}else if(y>x && y>z){
printf("The largest number is %d", y);
}else{
printf("The largest number is %d", z);
}
return 0;
}
