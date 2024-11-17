#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    printf("\nPractical 34, 04814902024, Apurva Kumar\n");
    file = fopen("datafile.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(0);
    }
    printf("Enter text to write to the file: ");
    while ((ch = getchar()) != '\n') { 
        putc(ch, file);
    }
    fclose(file);
    printf("Data written to file successfully.\n");

    file = fopen("datafile.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("\nData read from file:\n");
    while ((ch = getc(file)) != EOF) {
        printf("%c", ch);
    }
    printf("\n\n");
    fclose(file);
    return 0;
}