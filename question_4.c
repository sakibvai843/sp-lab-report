#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the input is a non-negative integer
    if(n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long result = factorial(n);
        printf("Factorial of %d is %llu\n", n, result);
    }

    return 0;
}
