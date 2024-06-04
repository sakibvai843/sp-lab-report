#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int n, target, result;

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search
    result = linearSearch(arr, n, target);

    // Display the result
    if(result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
