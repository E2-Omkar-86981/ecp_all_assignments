#include <stdio.h>
#include <string.h>

// Define a struct to hold student information
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to accept student information from the user
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

// Function to print student's information
void printStudentInfo(struct Student s) {
    printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;

    // Accept student information
    acceptStudentInfo(&student);

    // Print student information
    printStudentInfo(student);

    return 0;
}
