#include <stdio.h>
#include <string.h>

void printNumberInWords(int num) {
    const char *ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    const char *teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    const char *tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    const char *thousands[] = { "", "Thousand", "Million", "Billion" };

    if (num == 0) {
        printf("Zero");
        return;
    }

    void numberToWords(int n, char* str);

    char words[1024] = "";
    int i = 0;
    int numCopy = num;
    
    if (num < 0) {
        printf("Negative ");
        num = -num;
    }

    while (num > 0) {
        int part = num % 1000;
        if (part > 0) {
            char buffer[256] = "";
            numberToWords(part, buffer);
            strcat(buffer, " ");
            strcat(buffer, thousands[i]);
            strcat(buffer, " ");
            strcat(buffer, words);
            strcpy(words, buffer);
        }
        num /= 1000;
        i++;
    }

    printf("%s", words);
}

void numberToWords(int n, char* str) {
    const char *ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    const char *teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    const char *tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    if (n >= 100) {
        strcat(str, ones[n / 100]);
        strcat(str, " Hundred ");
        n %= 100;
    }

    if (n >= 20) {
        strcat(str, tens[n / 10]);
        strcat(str, " ");
        n %= 10;
    } else if (n >= 10) {
        strcat(str, teens[n - 10]);
        strcat(str, " ");
        n = 0;
    }

    if (n > 0) {
        strcat(str, ones[n]);
        strcat(str, " ");
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number in words: ");
    printNumberInWords(num);
    printf("\n");

    return 0;
}

