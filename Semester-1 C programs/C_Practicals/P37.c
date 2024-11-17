#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    printf("\nPractical 37, 04814902024, Apurva Kumar\n");
    file = fopen("numbers.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    for (int i = 1; i <= 5; i++) {
        fwrite(&i, sizeof(int), 1, file);
    }
    fclose(file);
    printf("Integers written to file successfully.\n");

    file = fopen("numbers.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(0);
    }
    printf("Enter the position (0-4) of the integer to read: ");
    int position;
    scanf("%d", &position);
    fseek(file, position * sizeof(int), SEEK_SET);
    fread(&number, sizeof(int), 1, file);
    printf("Integer at position %d is: %d\n\n", position, number);
    fclose(file);
    return 0;
}