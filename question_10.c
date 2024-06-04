#include <stdio.h>
#include <limits.h>

// Function to find the second smallest and second largest numbers in the array
void findSecondSmallestAndLargest(int arr[], int size, int *secondSmallest, int *secondLargest) {
    int smallest = INT_MAX, largest = INT_MIN;
    *secondSmallest = INT_MAX;
    *secondLargest = INT_MIN;

    // Finding the smallest and largest elements
    for(int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Finding the second smallest and second largest elements
    for(int i = 0; i < size; i++) {
        if (arr[i] > smallest && arr[i] < *secondSmallest) {
            *secondSmallest = arr[i];
        }
        if (arr[i] < largest && arr[i] > *secondLargest) {
            *secondLargest = arr[i];
        }
    }
}

int main() {
    int n;

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int secondSmallest, secondLargest;

    // Find the second smallest and second largest elements
    findSecondSmallestAndLargest(arr, n, &secondSmallest, &secondLargest);

    // Modify the second smallest element
    if (secondSmallest % 2 == 0) {
        secondSmallest += 2;
    } else {
        secondSmallest -= 2;
    }

    // Modify the second largest element
    if (secondLargest % 2 == 0) {
        secondLargest *= 2;
    } else {
        secondLargest /= 2;
    }

    // Print the modified array
    printf("Modified array: ");
    for(int i = 0; i < n; i++) {
        if (arr[i] == secondSmallest + 2 || arr[i] == secondSmallest - 2) {
            printf("%d ", secondSmallest);
        } else if (arr[i] == secondLargest / 2 || arr[i] == secondLargest * 2) {
            printf("%d ", secondLargest);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
