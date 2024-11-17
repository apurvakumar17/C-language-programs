#include <stdio.h>
#include <stdlib.h>
//"sample.txt" should be created
int main() {
    FILE *file;
    char ch;
    printf("\nPractical 40, 04814902024, Apurva Kumar\n");
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!");
        exit(0);
    }
    printf("Reading characters from the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        printf("\nCurrent file pointer position: %d\n", ftell(file));
    }
    rewind(file);
    printf("\nFile pointer reset using rewind().\n");
    printf("Reading the first character again: %c\n\n", fgetc(file));
    fclose(file);
    return 0;
}