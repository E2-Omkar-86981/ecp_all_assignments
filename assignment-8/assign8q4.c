#include <stdio.h>

typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
} Student;

Student* searchByRollNumber(Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            return &students[i];
        }
    }
    return NULL;
}

