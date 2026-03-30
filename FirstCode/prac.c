#include <stdio.h>
int main(){
int a =5, b = 2, c,d,e;
c = a++;
b = --c;
a = ++c;
d = a--;
e = (a > b) && (c==3);
printf("%d \n", a);
printf("%d \n", b);
printf("%d \n", c);
printf("%d \n", d);
printf("%d \n", e);

return 0;
}
