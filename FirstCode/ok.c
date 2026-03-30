#include <stdio.h>

int main() {

    char sentence[17];
    scanf("%[^\n]%*c", sentence);

    printf("Hello, World!\n");
    printf("%s\n", sentence);

    return 0;
}
