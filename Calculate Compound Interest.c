#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest;

    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);

    compound_interest = principal * pow((1 + rate / 100), time);
    printf("Compound Interest: %lf\n", compound_interest - principal);
    return 0;
}
