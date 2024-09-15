#include <stdio.h>

void findAndReplace(char* str, const char* find, const char* replace) {
    char buffer[1024];
    char* p;
    int findLen = 0, replaceLen = 0, index = 0;

    // Calculate lengths of find and replace strings
    while (find[findLen] != '\0') findLen++;
    while (replace[replaceLen] != '\0') replaceLen++;

    // Process the string
    while (*str) {
        // Check if the substring to find matches
        p = str;
        index = 0;
        while (p[index] == find[index] && find[index] != '\0') index++;

        if (find[index] == '\0') {
            // Replace substring
            int j = 0;
            while (replace[j] != '\0') buffer[j++] = replace[j++];
            str += findLen;  // Move past the substring to be replaced
        } else {
            // Copy the current character
            buffer[index] = *str++;
            index++;
        }
        buffer[index] = '\0';  // Null-terminate buffer
        printf("%s", buffer);  // Print the result
    }
}

int main() {
    char str[1024];
    char find[100];
    char replace[100];

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    int len = 0;
    while (str[len] != '\0') len++;
    if (len > 0 && str[len-1] == '\n') str[len-1] = '\0';

    // Input the substring to find
    printf("Enter the substring to find: ");
    fgets(find, sizeof(find), stdin);
    len = 0;
    while (find[len] != '\0') len++;
    if (len > 0 && find[len-1] == '\n') find[len-1] = '\0';

    // Input the replacement substring
    printf("Enter the replacement substring: ");
    fgets(replace, sizeof(replace), stdin);
    len = 0;
    while (replace[len] != '\0') len++;
    if (len > 0 && replace[len-1] == '\n') replace[len-1] = '\0';

    // Call the function to find and replace
    findAndReplace(str, find, replace);

    return 0;
}

