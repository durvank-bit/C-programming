#include <stdio.h>

int main(void) {
    int num1, num2, sum;
    int *p1, *p2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assign addresses to pointers
    p1 = &num1;
    p2 = &num2;

    // Add values pointed to by p1 and p2
    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}