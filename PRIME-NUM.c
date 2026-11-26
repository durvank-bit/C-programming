#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    printf("==================================================\n");
    printf("PRIME NUMBERS FINDER USING WHILE LOOP\n");
    printf("==================================================\n");
    
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("\nPrime numbers between %d and %d are:\n", lower, upper);

    i = lower;
    while (i <= upper) {
        if (i <= 1) {
            isPrime = 0; // Numbers <= 1 are not prime
        } else {
            isPrime = 1; // Assume the number is prime initially
            j = 2;       // Start checking divisors from 2

            while (j < i) {
                // If remainder is 0, 'i' is divisible by 'j', hence not prime
                if (i % j == 0) {
                    isPrime = 0; // Mark as not prime
                    break;       // Exit the inner loop early since it's confirmed composite
                }
                j++; // Increment the inner loop counter
            }
        }

        // If 'isPrime' is still 1, it means no divisors were found, so it is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }

        i++; // Increment the outer loop counter to check the next number
    }

    printf("\n--------------------------------------------------\n");

    return 0;
}