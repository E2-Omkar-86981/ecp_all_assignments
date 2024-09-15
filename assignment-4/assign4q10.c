#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    // Leap year is divisible by 4, but not divisible by 100, except when divisible by 400
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

// Function to return the number of days in a given month of a given year
int daysInMonth(int month, int year) {
    // Array with the number of days for each month
    int daysInMonthArray[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check if the month is valid
    if (month < 1 || month > 12) {
        printf("Error: Invalid month.\n");
        return -1; // Error code for invalid month
    }

    // If February and a leap year, return 29 days
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return daysInMonthArray[month - 1];
}

int main() {
    int month, year;

    // Input from user for leap year check
    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // Input from user for days in month
    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    printf("Enter a year: ");
    scanf("%d", &year);

    // Print the number of days in the specified month
    int days = daysInMonth(month, year);
    if (days != -1) { // Valid month
        printf("Number of days in month %d of year %d: %d\n", month, year, days);
    }

    return 0;
}

