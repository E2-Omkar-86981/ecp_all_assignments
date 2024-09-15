//Modify above program to display names in sorted order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No names provided.\n");
        return 1;
    }

    qsort(argv + 1, argc - 1, sizeof(char*), compare);

    printf("Sorted list of names:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

