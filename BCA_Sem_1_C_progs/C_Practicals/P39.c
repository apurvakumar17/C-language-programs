#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;
    printf("\nPractical 39, 04814902024, Apurva Kumar\n");
    file1 = fopen("data1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file data1.txt!\n");
        exit(0);
    }
    file2 = fopen("data2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file data2.txt!\n");
        fclose(file1);
        exit(0);
    }
    file3 = fopen("result.txt", "w");
    if (file3 == NULL) {
        printf("Error creating file result.txt!\n");
        fclose(file1);
        fclose(file2);
        exit(0);
    }
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }
    fclose(file1);
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }
    fclose(file2);
    fclose(file3);
    printf("Files merged successfully into result.txt\n\n");
    return 0;
}