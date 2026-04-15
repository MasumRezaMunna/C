//Write a C program to input radius of circle from user and find diameter, circumference and area of the given circle using function. How to find diameter, circumference and area of a circle using function in C programming.

#include<stdio.h>
#include<math.h>

double getDiameter (double radius);
double getCircumference (double radius);
double getArea (double radius);

int main(){
    float radius, dia, circ, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia = getDiameter(radius);
    circ = getCircumference(radius);
    area = getArea(radius);

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f units\n", area);

    return 0;
}

double getDiameter (double radius) {
    return 2 * radius;
}

double getCircumference (double radius) {
    return 2 * 3.14159 * radius;
}

double getArea (double radius) {
    return 3.14159 * radius * radius;
}