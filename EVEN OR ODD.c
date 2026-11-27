#include <stdio.h>

int main() {
    int start, end, i, temp, sum = 0;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    // Swap if entered in reverse order
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    // Calculate the sum of odd numbers in the range [start, end]
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers between %d and %d = %d\n", start, end, sum);

    return 0;
}