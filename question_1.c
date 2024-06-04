#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Prompt user for input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest per annum: ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}
