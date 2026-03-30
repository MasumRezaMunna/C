#include <stdio.h>

int main() {
    char name[50];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
