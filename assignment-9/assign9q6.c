#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define FILE_NAME "students.dat"

typedef enum {
    WRITE_RECORD = 1,
    READ_RECORD,
    SEARCH_BY_ROLL_NO,
    SEARCH_BY_NAME,
    MODIFY_RECORD,
    REMOVE_RECORD,
    EXIT
} MenuOption;

typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int standard;
    float grade;
} Student;

void writeRecord(FILE *file) {
    Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    getchar(); // Clear newline character

    printf("Enter name: ");
    fgets(student.name, MAX_NAME_LENGTH, stdin);
    size_t len = strlen(student.name);
    if (len > 0 && student.name[len - 1] == '\n') {
        student.name[len - 1] = '\0';
    }

    printf("Enter standard: ");
    scanf("%d", &student.standard);

    printf("Enter grade: ");
    scanf("%f", &student.grade);

    fseek(file, 0, SEEK_END);
    fwrite(&student, sizeof(Student), 1, file);
}

void readRecords(FILE *file) {
    Student student;
    rewind(file);
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Roll Number: %d\n", student.rollNumber);
        printf("Name: %s\n", student.name);
        printf("Standard: %d\n", student.standard);
        printf("Grade: %.2f\n", student.grade);
        printf("\n");
    }
}

void searchByRollNo(FILE *file, int rollNumber) {
    Student student;
    rewind(file);
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Standard: %d\n", student.standard);
            printf("Grade: %.2f\n", student.grade);
            return;
        }
    }
    printf("Record not found.\n");
}

void searchByName(FILE *file, const char *name) {
    Student student;
    rewind(file);
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (strcmp(student.name, name) == 0) {
            printf("Roll Number: %d\n", student.rollNumber);
            printf("Name: %s\n", student.name);
            printf("Standard: %d\n", student.standard);
            printf("Grade: %.2f\n", student.grade);
            return;
        }
    }
    printf("Record not found.\n");
}

void modifyRecord(FILE *file, int rollNumber) {
    Student student;
    FILE *tempFile;
    int found = 0;

    file = fopen(FILE_NAME, "r+b");
    tempFile = fopen("temp.dat", "w+b");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            printf("Enter new name: ");
            getchar(); // Clear newline character
            fgets(student.name, MAX_NAME_LENGTH, stdin);
            size_t len = strlen(student.name);
            if (len > 0 && student.name[len - 1] == '\n') {
                student.name[len - 1] = '\0';
            }

            printf("Enter new standard: ");
            scanf("%d", &student.standard);

            printf("Enter new grade: ");
            scanf("%f", &student.grade);

            found = 1;
        }
        fwrite(&student, sizeof(Student), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found) {
        printf("Record updated successfully.\n");
    } else {
        printf("Record not found.\n");
    }
}

void removeRecord(FILE *file, int rollNumber) {
    Student student;
    FILE *tempFile;
    int found = 0;

    file = fopen(FILE_NAME, "r+b");
    tempFile = fopen("temp.dat", "w+b");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.rollNumber == rollNumber) {
            found = 1;
        } else {
            fwrite(&student, sizeof(Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found) {
        printf("Record removed successfully.\n");
    } else {
        printf("Record not found.\n");
    }
}

int main() {
    FILE *file;
    int choice, rollNumber;
    char name[MAX_NAME_LENGTH];

    file = fopen(FILE_NAME, "a+b");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (1) {
        printf("Menu:\n");
        printf("1. Write Student Record\n");
        printf("2. Read Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Search Student by Name\n");
        printf("5. Modify Student Record\n");
        printf("6. Remove Student Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case WRITE_RECORD:
                writeRecord(file);
                break;
            case READ_RECORD:
                readRecords(file);
                break;
            case SEARCH_BY_ROLL_NO:
                printf("Enter roll number to search: ");
                scanf("%d", &rollNumber);
                searchByRollNo(file, rollNumber);
                break;
            case SEARCH_BY_NAME:
                printf("Enter name to search: ");
                getchar(); // Clear newline character
                fgets(name, MAX_NAME_LENGTH, stdin);
                size_t len = strlen(name);
                if (len > 0 && name[len - 1] == '\n') {
                    name[len - 1] = '\0';
                }
                searchByName(file, name);
                break;
            case MODIFY_RECORD:
                printf("Enter roll number to modify: ");
                scanf("%d", &rollNumber);
                modifyRecord(file, rollNumber);
                break;
            case REMOVE_RECORD:
                printf("Enter roll number to remove: ");
                scanf("%d", &rollNumber);
                removeRecord(file, rollNumber);
                break;
            case EXIT:
                fclose(file);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

