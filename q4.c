// Q4 : Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI = 3.14159f;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
