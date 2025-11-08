// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <stdio.h>

int main() {
    double principal, rate, time;
    double simpleInterest, amount, compoundInterest;
    int i;
 printf("Enter the principal amount: ");
    scanf("%lf", &principal);
 printf("Enter the annual rate of interest (in %%): ");
    scanf("%lf", &rate);
 printf("Enter the time (in years): ");
    scanf("%lf", &time);
    simpleInterest = (principal * rate * time) / 100.0;
    amount = principal;
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100.0);
    }
    compoundInterest = amount - principal;
printf("\nSimple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest (for %d years) = %.2lf\n", i, compoundInterest);
return 0;
}
