#include <stdio.h>

void copyFile(FILE *src, FILE *dest) {
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
}

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char buffer[256];

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

    copyFile(sourceFile, destFile);

    fclose(sourceFile);
    fclose(destFile);

    printf("Contents of the destination file:\n");

    destFile = fopen("destination.txt", "r");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), destFile) != NULL) {
        printf("%s", buffer);
    }
    fclose(destFile);

    printf("\nEnter data to append to the destination file:\n");

    destFile = fopen("destination.txt", "a");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (buffer[0] == '\n') break;
        fputs(buffer, destFile);
    }
    fclose(destFile);

    return 0;
}

