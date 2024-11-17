#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char line[100];
    printf("\nPractical 35, 04814902024, Apurva Kumar\n");
    file = fopen("datafile.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(0);
    }
    printf("Enter text to write to the file (end input with 'exit'):\n");

    while (1) {
        fgets(line, 100, stdin);
        if (strncmp(line, "exit", 4) == 0) { 
            break;
        }
        fputs(line, file);
    }
    fclose(file);
    printf("Data written to file successfully.\n");

    file = fopen("datafile.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(0);
    }
    printf("\nData read from file:\n");
    while (fgets(line, 100, file) != NULL) {
        fputs(line, stdout); // Displaying the line on the console
    }
    printf("\n\n");
    fclose(file);
    return 0;
}