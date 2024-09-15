#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int standard;
    float grade;
} Student;

void writeStudentToFile(FILE *file, const Student *student) {
    fprintf(file, "%s %d %.2f\n", student->name, student->standard, student->grade);
}

void readStudentFromFile(FILE *file, Student *student) {
    fscanf(file, "%s %d %f", student->name, &student->standard, &student->grade);
}

int main() {
    FILE *file;
    Student student1 = {"Alice", 10, 88.5};
    Student student2;

    // Write student record to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    writeStudentToFile(file, &student1);
    fclose(file);

    // Read student record from file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    readStudentFromFile(file, &student2);
    fclose(file);

    // Display the student record
    printf("Student Record:\n");
    printf("Name: %s\n", student2.name);
    printf("Standard: %d\n", student2.standard);
    printf("Grade: %.2f\n", student2.grade);

    return 0;
}

