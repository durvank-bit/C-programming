#include <stdio.h>
#include <stdlib.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main(void) {
    FILE *fp;
    struct employee emp;
    int choice, n;

    while (1) {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee Records\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("employee.txt", "a");
            if (fp == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("How many employees do you want to add? ");
            scanf("%d", &n);

            for (int i = 0; i < n; i++) {
                printf("\nEmployee %d ID: ", i + 1);
                scanf("%d", &emp.id);
                printf("Employee %d Name: ", i + 1);
                scanf(" %49[^\n]", emp.name);
                printf("Employee %d Salary: ", i + 1);
                scanf("%f", &emp.salary);

                fprintf(fp, "%d | %s | %.2f\n", emp.id, emp.name, emp.salary);
            }

            fclose(fp);
            printf("Record(s) saved successfully to employee.txt.\n");

        } else if (choice == 2) {
            fp = fopen("employee.txt", "r");
            if (fp == NULL) {
                printf("No records found! Add employees first.\n");
                continue;
            }

            printf("\n--- Employee Records (ID | Name | Salary) ---\n");
            char line[120];
            while (fgets(line, sizeof(line), fp) != NULL) {
                printf("%s", line);
            }
            fclose(fp);

        } else if (choice == 3) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}