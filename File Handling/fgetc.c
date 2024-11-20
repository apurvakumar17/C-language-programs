#include <stdio.h>

int main() {
    FILE *fptr = fopen("mydoc.txt", "r");
    if (fptr == NULL) {
        printf("Sorry failed to open the requested file");
        return 1;
    }
    char ch;
    while (1) {
        ch = fgetc(fptr);
        if (ch == EOF) {
            break;
        }
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}