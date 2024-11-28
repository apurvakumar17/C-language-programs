#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    fseek(file, 10, SEEK_SET);  // Move to the 10th byte from the beginning.
    char ch;
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != 'k');
    printf("\n%d", ftell(file));

    fclose(file);
}