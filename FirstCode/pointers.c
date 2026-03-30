#include<stdio.h>
int main (){
int age = 24;
printf("%p", &age); // the code will output the memory address of the variable, which is a hexadeciimal
// NOTE: the format specifier for hexadecimals is %p .
return 0;
}
