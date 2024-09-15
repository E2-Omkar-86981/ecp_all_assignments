#include <stdio.h>

int main() {
    // Variables to store marks and the total and average
    float marks[5];
    float total = 0.0, average;
    
    // Input marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Sum up the marks
    }

    // Calculate average
    average = total / 5.0;

    // Output the total and average
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}

