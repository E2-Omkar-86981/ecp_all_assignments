#include <stdio.h>
#include <string.h>

int main() {
    Student students[3] = {
        {3, "Charlie", 21, 85.0},
        {1, "Alice", 20, 88.5},
        {2, "Bob", 22, 91.0}
    };

    int numStudents = 3;
    
    sortByRollNumber(students, numStudents);
    printf("Sorted by roll number:\n");
    for (int i = 0; i < numStudents; i++) {
        printStudentInfo(&students[i]);
    }
    
    sortByName(students, numStudents);
    printf("Sorted by name:\n");
    for (int i = 0; i < numStudents; i++) {
        printStudentInfo(&students[i]);
    }
    
    return 0;
}

