#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;  // Add the last digit to the sum
        n /= 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int n;

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the input is a non-negative integer
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and display the sum of digits
        int result = sumOfDigits(n);
        printf("The sum of digits of %d is %d\n", n, result);
    }

    return 0;
}
