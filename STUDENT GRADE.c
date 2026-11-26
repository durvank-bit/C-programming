#include <stdio.h>

int main() {
    int choice;
    char cont;
    float m1, m2, m3, total, avg;

    do {
        printf("======================================\n");
        printf("STUDENT GRADE & RESULT MANAGEMENT\n");
        printf("======================================\n");
        printf("1. Calculate Total and Average Marks\n");
        printf("2. Determine Student Grade\n");
        printf("3. Check Pass/Fail Result Status\n");
        printf("4. Exit Program\n\n");

        printf("Enter your choice (1 to 4) : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Calculate Total and Average Marks ---\n");
                printf("Enter marks for 3 subjects: ");
                scanf("%f %f %f", &m1, &m2, &m3);
                total = m1 + m2 + m3;
                avg = total / 3.0;
                printf("Total Marks: %.2f\n", total);
                printf("Average Marks: %.2f\n", avg);
                break;

            case 2:
                printf("\n--- Grade Determination ---\n");
                printf("Enter average percentage: ");
                scanf("%f", &avg);

                if (avg < 0 || avg > 100) {
                    printf("Invalid percentage entered.\n");
                } else if (avg >= 85) {
                    printf("Grade: O (Outstanding)\n");
                } else if (avg >= 75) {
                    printf("Grade: A+ (Excellent)\n");
                } else if (avg >= 65) {
                    printf("Grade: A (Very Good)\n");
                } else if (avg >= 55) {
                    printf("Grade: B+ (Good)\n");
                } else if (avg >= 50) {
                    printf("Grade: B (Above Average)\n");
                } else if (avg >= 40) {
                    printf("Grade: C (Pass)\n");
                } else {
                    printf("Grade: F (Fail)\n");
                }
                break;

            case 3:
                printf("\n--- Pass/Fail Result Status ---\n");
                printf("Enter marks for 3 subjects: ");
                scanf("%f %f %f", &m1, &m2, &m3);

                if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
                    printf("Result: PASS\n");
                } else {
                    printf("Result: FAIL\n");
                }
                break;

            case 4:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please select between 1 and 4.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
        printf("\n");

    } while (cont == 'y' || cont == 'Y');

    return 0;
}