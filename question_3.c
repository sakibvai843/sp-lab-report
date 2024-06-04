#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next, i;

    if(n < 1) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci sequence up to %d terms:\n", n);

    for(i = 0; i < n; i++) {
        if(i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
