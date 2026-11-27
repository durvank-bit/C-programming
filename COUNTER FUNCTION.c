#include <stdio.h>

// Function using a static storage class variable as a counter
void counterFunction(void) {
    // 'static' keyword ensures the variable retains its value between function calls
    static int count = 0;

    count++;
    printf("Function called %d time(s).\n", count);
}

int main(void) {
    int n;

    printf("Enter how many times you want to call the counter function: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("\n--- Calling Counter Function ---\n");
    for (int i = 0; i < n; i++) {
        counterFunction();
    }

    return 0;
}