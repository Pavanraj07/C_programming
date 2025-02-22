#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to the file: ");
    scanf(" %[^\n]", text);
    fprintf(file, "%s", text);
    fclose(file);

    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nReading from file:\n");
    while (fgets(text, sizeof(text), file)) {
        printf("%s", text);
    }

    fclose(file);
    return 0;
}

