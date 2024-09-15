#include <stdio.h>
#include <ctype.h>  // For tolower()
#include <stdbool.h>  // For boolean type

// a. Simulate strlen
size_t my_strlen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// b. Simulate strcpy
char* my_strcpy(char *dest, const char *src) {
    char* ptr = dest;
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

// c. Simulate strcat
char* my_strcat(char *dest, const char *src) {
    char* ptr = dest + my_strlen(dest);  // Start appending at the end of dest
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

// d. Simulate strcmp
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// e. Simulate stricmp (case-insensitive comparison)
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 && (tolower(*str1) == tolower(*str2))) {
        str1++;
        str2++;
    }
    return (unsigned char)tolower(*str1) - (unsigned char)tolower(*str2);
}

// f. Simulate strrev (reverse a string)
char* my_strrev(char* str) {
    int len = my_strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

// g. Simulate strchr (find first occurrence of a character)
char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) {
            return (char*)str;  // Return pointer to first occurrence
        }
        str++;
    }
    return NULL;  // Character not found
}

// h. Simulate strstr (find first occurrence of a substring)
char* my_strstr(const char *str, const char *substr) {
    while (*str) {
        const char *s = str;
        const char *sub = substr;
        while (*sub && (*s == *sub)) {
            s++;
            sub++;
        }
        if (*sub == '\0') {
            return (char*)str;  // Substring found
        }
        str++;
    }
    return NULL;  // Substring not found
}

// Test the functions
int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    // a. Test strlen
    printf("Length of str1: %zu\n", my_strlen(str1));

    // b. Test strcpy
    my_strcpy(str1, str2);
    printf("After strcpy, str1: %s\n", str1);

    // c. Test strcat
    my_strcat(str1, "!");
    printf("After strcat, str1: %s\n", str1);

    // d. Test strcmp
    int cmp = my_strcmp("apple", "banana");
    printf("strcmp(\"apple\", \"banana\"): %d\n", cmp);

    // e. Test stricmp
    int cmp_ic = my_stricmp("HELLO", "hello");
    printf("stricmp(\"HELLO\", \"hello\"): %d\n", cmp_ic);

    // f. Test strrev
    my_strrev(str1);
    printf("After strrev, str1: %s\n", str1);

    // g. Test strchr
    char* pos = my_strchr(str1, 'o');
    if (pos != NULL) {
        printf("First occurrence of 'o' in str1: %s\n", pos);
    } else {
        printf("'o' not found in str1\n");
    }

    // h. Test strstr
    char* substr = my_strstr("This is a test", "test");
    if (substr != NULL) {
        printf("First occurrence of 'test' in string: %s\n", substr);
    } else {
        printf("'test' not found in string\n");
    }

    return 0;
}

