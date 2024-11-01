#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    printf("\nPractical 36, 04814902024, Apurva Kumar\n");
    file = fopen("datafile.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(0);
    }
    printf("Enter integers to write to the file (enter -1 to stop):\n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        putw(number, file); 
    }
    fclose(file);
    printf("Data written to file successfully.\n");

    file = fopen("datafile.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("\nData read from file:\n");
    while ((number = getw(file)) != EOF) {
        printf("%d\n", number); 
    }
    fclose(file);
    printf("\n");
    return 0;
}