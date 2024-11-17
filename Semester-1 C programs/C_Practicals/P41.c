#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *evenf, *oddf;
    int number;
    printf("\nPractical 41, 04814902024, Apurva Kumar\n");

    file1 = fopen("data.txt", "w");
    if (file1 == NULL) {
        printf("Error opening data file.\n");
        exit(0);
    }
    for (number = 1; number <= 10; number++) {
        fprintf(file1, "%d\n", number);
    }
    fclose(file1);
    file1 = fopen("data.txt", "r");
    if (file1 == NULL) {
        printf("Error opening data file for reading.\n");
        exit(0);
    }
    evenf = fopen("even.txt", "w");
    oddf = fopen("odd.txt", "w");
    if (evenf == NULL || oddf == NULL) {
        printf("Error opening even or odd file.\n");
        fclose(file1);
        exit(0);
    }
    while (fscanf(file1, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenf, "%d\n", number);
        } else {
            fprintf(oddf, "%d\n", number);
        }
    }
    fclose(file1);
    fclose(evenf);
    fclose(oddf);
    printf("Files created successfully.\n\n");
    return 0;
}