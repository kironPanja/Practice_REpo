#include <stdio.h>

int main() {
    float principal, rate, time, interest, amount;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    amount = principal + interest;
    printf("\nSimple Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", amount);
    return 0;
}


