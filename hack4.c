#include <stdio.h>



int main() {
    int a, b;

    scanf("%d%d",&a,&b);
    printf("%d\n", a+b);

    int minus = abs(a-b);
    printf("%d",minus);

    return 0;
}
