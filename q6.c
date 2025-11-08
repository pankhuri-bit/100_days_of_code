// Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    float num1, num2, temp;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    temp = num1; 
    num1 = num2; 
    num2 = temp; 
    printf("After swapping:\n");
    printf("First number = %.2f\n", num1);
    printf("Second number = %.2f\n", num2);
    return 0;
}