#include <stdio.h>
#include <string.h>

void numToRoman(int num, char* roman) {
    struct {
        int value;
        const char* numeral;
    } romanTable[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    int i = 0;
    while (num > 0) {
        for (i = 0; i < 13; i++) {
            while (num >= romanTable[i].value) {
                strcat(roman, romanTable[i].numeral);
                num -= romanTable[i].value;
            }
        }
    }
}

int romanToNum(const char* roman) {
    struct {
        const char* numeral;
        int value;
    } romanTable[] = {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
        {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
        {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
    };

    int num = 0;
    int i = 0;
    while (*roman) {
        for (i = 0; i < 13; i++) {
            int len = strlen(romanTable[i].numeral);
            if (strncmp(roman, romanTable[i].numeral, len) == 0) {
                num += romanTable[i].value;
                roman += 

