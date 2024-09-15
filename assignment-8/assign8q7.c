#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    unsigned int standard : 4;
    unsigned int gender : 1;
    unsigned int age : 6; // 32 years fits within 6 bits
} Student;

void acceptStudentInfo(Student *student) {
    printf("Enter student's name: ");
    fgets(student->name, MAX_NAME_LENGTH, stdin);
    size_t len = strlen(student->name);
    if (len > 0 && student->name[len - 1] == '\n') {
        student->name[len - 1] = '\0';
    }

    printf("Enter student's standard (1-12): ");
    scanf("%u", &student->standard);
    getchar(); // Clear newline character

    printf("Enter student's gender (0 for female, 1 for male): ");
    scanf("%u", &student->gender);
    getchar(); // Clear newline character

    printf("Enter student's age (1-32): ");
    scanf("%u", &student->age);
    getchar(); // Clear newline character
}

void printStudentInfo(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Standard: %u\n", student->standard);
    printf("Gender: %s\n", student->gender ? "Male" : "Female");
    printf("Age: %u\n", student->age);
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

