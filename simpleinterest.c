#include <stdio.h>

int main() {
    float principle, time, rate, SI,amount;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;
    amount= SI+principle;
    printf("Simple Interest = %f", SI);
    printf("\n\nTotal Amount after %.2f years is= %f",time,amount);
    return 0;
}
