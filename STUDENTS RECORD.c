>#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main(void) {
    struct student_record s[5];
    int topper_index = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Total Marks Obtained: ");
        scanf("%f", &s[i].total_marks);
    }

    // Find the student with the highest marks
    for (int i = 1; i < 5; i++) {
        if (s[i].total_marks > s[topper_index].total_marks) {
            topper_index = i;
        }
    }

    printf("\n--- Topper Details ---\n");
    printf("Name         : %s\n", s[topper_index].name);
    printf("Roll Number  : %d\n", s[topper_index].roll_number);
    printf("Total Marks  : %.2f\n", s[topper_index].total_marks);

    return 0;
}
