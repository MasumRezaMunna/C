#include<stdio.h>
int main(){
int age = 24;
int* p = &age;
printf("%p", p); // p is a pointer to an int variable, thats why it is declared as int*, which reads as "a pointer to an int"
// p is assigned to the memory address of the age variable, so it holds that address as its value.
// * = asterisk sign
return 0;
}
