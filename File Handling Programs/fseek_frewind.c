#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    fseek(file, 10, SEEK_SET);  // Move to the 10th byte from the beginning.
    char ch;
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF);
    puts(".");

    fseek (file, -5, SEEK_CUR); // Move cursor 5 bytes back from current position
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF);
    puts(".");

    fseek(file, 0, SEEK_SET); // Move cursor to beginning of the file.
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF);
    puts(".");

    fseek(file, -26, SEEK_END); // Move cursor 26 bytes back from the end of the file
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF);
    puts(".");
    
    rewind(file); //same as fseek(file, 0, SEEK_SET)
    do {
        ch = fgetc(file);
        printf("%c", ch);
    } while (ch != EOF);
    puts(".");
    fclose(file);
}