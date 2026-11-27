#include <stdio.h>

int main(void) {
    int n, arr[100];
    int *ptr;

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Point to the last element of the array
    ptr = &arr[n - 1];

    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}