
#include<stdio.h>
float a,b,c,d,sum,avg;
void main(){
printf("Enter the value of a,b,c,d");
scanf("%f %f %f %f", &a, &b, &c, &d);
sum = a + b + c + d;
avg = sum / 4;
printf("Total CGPA is %f", avg);
}
