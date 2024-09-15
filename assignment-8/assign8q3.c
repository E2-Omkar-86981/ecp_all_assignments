#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void acceptStudentInfo(struct Student *s) {
    printf("Enter student name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strlen(s->name) - 1] = '\0'; // remove newline character

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
    getchar(); // consume newline character left in input buffer
}

void printStudentInfo(struct Student s) {
    printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

void acceptStudentsInfo(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        acceptStudentInfo(&s[i]);
    }
}

void printStudentsInfo(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d information:\n", i + 1);
        printStudentInfo(s[i]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // consume newline character left in input buffer

    struct Student students[n];

    acceptStudentsInfo(students, n);
    printStudentsInfo(students, n);

    return 0;
}
