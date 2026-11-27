#include <stdio.h>

int main(void) {
    int n, arr[100], max;

    printf("Enter the number of elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    // Assume the first element is the largest
    max = arr[0];

    // Compare with remaining elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nLargest element in the array = %d\n", max);

    return 0;
}