#include <stdio.h>

void copyFileLineByLine(FILE *src, FILE *dest) {
    char line[256];
    while (fgets(line, sizeof(line), src) != NULL) {
        fputs(line, dest);
    }
}

int main() {
    FILE *sourceFile;
    FILE *destFile;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFileLineByLine(sourceFile, destFile);

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}

