#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters added by fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // a. strlen() - Get length of string
    printf("\nLength of str1: %zu", strlen(str1));
    printf("\nLength of str2: %zu", strlen(str2));

    // b. strcpy() - Copy str2 into str1
    strcpy(str1, str2);
    printf("\nAfter strcpy, str1: %s", str1);

    // c. strcat() - Concatenate str2 to str1
    strcat(str1, str2);
    printf("\nAfter strcat, str1: %s", str1);

    // d. strcmp() - Compare str1 and str2
    int cmp = strcmp(str1, str2);
    printf("\nstrcmp(str1, str2): %d", cmp);

    // e. stricmp() - Case-insensitive comparison (this is non-standard in C; some compilers support it)
    // Use strcasecmp() as a standard alternative
    int cmp_case_insensitive = strcasecmp(str1, str2);
    printf("\nstrcasecmp(str1, str2): %d", cmp_case_insensitive);

    // f. strrev() - Reverse string (this is not standard in string.h, but can be implemented)
    // We can write a small custom implementation:
    void reverse(char* str) {
        int len = strlen(str);
        for (int i = 0; i < len / 2; i++) {
            char temp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = temp;
        }
    }
    reverse(str1);
    printf("\nReversed str1: %s", str1);
    reverse(str2);  // Reversing str2 as well
    printf("\nReversed str2: %s", str2);

    // g. strchr() - Find first occurrence of a character
    char *pos = strchr(str1, 'a');  // Find first occurrence of 'a'
    if (pos != NULL) {
        printf("\nFirst occurrence of 'a' in str1: %s", pos);
    } else {
        printf("\nCharacter 'a' not found in str1.");
    }

    // h. strstr() - Find first occurrence of a substring
    char *sub_pos = strstr(str1, "test");
    if (sub_pos != NULL) {
        printf("\nFirst occurrence of 'test' in str1: %s", sub_pos);
    } else {
        printf("\n'test' not found in str1.");
    }

    // i. strncpy() - Copy first n characters of str2 into str1
    strncpy(str1, str2, 5);  // Copy first 5 characters
    str1[5] = '\0';  // Ensure null-terminated
    printf("\nAfter strncpy, str1: %s", str1);

    // j. strncat() - Concatenate first n characters of str2 to str1
    strncat(str1, str2, 3);  // Append first 3 characters of str2
    printf("\nAfter strncat, str1: %s", str1);

    // k. strncmp() - Compare first n characters of str1 and str2
    int cmp_n = strncmp(str1, str2, 5);
    printf("\nstrncmp(str1, str2, 5): %d", cmp_n);

    // l. strtok() - Tokenize str1 based on spaces
    char str3[100] = "Hello world, how are you?";
    printf("\nOriginal string: %s\nTokens:\n", str3);
    char *token = strtok(str3, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

