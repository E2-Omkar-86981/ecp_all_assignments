#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 5

void acceptNames(char* names[NUM_STUDENTS]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        names[i] = (char*)malloc(100 * sizeof(char));
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void printNames(char* names[NUM_STUDENTS]) {
    printf("Student names:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\n", names[i]);
    }
}

void sortNames(char* names[NUM_STUDENTS]) {
    for (int i = 0; i < NUM_STUDENTS - 1; i++) {
        for (int j = i + 1; j < NUM_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char* temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void freeNames(char* names[NUM_STUDENTS]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        free(names[i]);
    }
}

int main() {
    char* names[NUM_STUDENTS];

    acceptNames(names);
    printf("\nBefore sorting:\n");
    printNames(names);

    sortNames(names);

    printf("\nAfter sorting:\n");
    printNames(names);

    freeNames(names);

    return 0;
}

