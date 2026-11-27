#include <stdio.h>

int main(void) {
    int r, c, a[20][20], b[20][20], sum[20][20];

    printf("Enter the number of rows (between 1 and 20): ");
    if (scanf("%d", &r) != 1 || r < 1 || r > 20) {
        printf("Invalid input. Rows must be between 1 and 20.\n");
        return 1;
    }

    printf("Enter the number of columns (between 1 and 20): ");
    if (scanf("%d", &c) != 1 || c < 1 || c > 20) {
        printf("Invalid input. Columns must be between 1 and 20.\n");
        return 1;
    }

    // Input elements of 1st matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid element input.\n");
                return 1;
            }
        }
    }

    // Input elements of 2nd matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &b[i][j]) != 1) {
                printf("Invalid element input.\n");
                return 1;
            }
        }
    }

    // Add two matrices
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}