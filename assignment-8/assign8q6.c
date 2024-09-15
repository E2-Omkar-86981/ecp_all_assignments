#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int standard;
    union {
        char grade;      // A, B, C for standards up to 4
        float percentage; // Percentage for standards above 4
    } result;
} Student;

void acceptStudentInfo(Student *student) {
    printf("Enter student's name: ");
    fgets(student->name, MAX_NAME_LENGTH, stdin);
    size_t len = strlen(student->name);
    if (len > 0 && student->name[len - 1] == '\n') {
        student->name[len - 1] = '\0';
    }

    printf("Enter student's standard (1-12): ");
    scanf("%d", &student->standard);
    getchar(); // Clear the newline character left by scanf

    if (student->standard <= 4) {
        printf("Enter student's grade (A/B/C): ");
        scanf(" %c", &student->result.grade);
    } else {
        printf("Enter student's percentage: ");
        scanf("%f", &student->result.percentage);
    }
    getchar(); // Clear the newline character left by scanf
}

void printStudentInfo(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Standard: %d\n", student->standard);
    if (student->standard <= 4) {
        printf("Grade: %c\n", student->result.grade);
    } else {
        printf("Percentage: %.2f\n", student->result.percentage);
    }
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printStudentInfo(&students[i]);
        printf("\n");
    }

    return 0;
}

