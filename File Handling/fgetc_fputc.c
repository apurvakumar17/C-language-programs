#include <stdio.h>

int main() {
    FILE *fptr1 = fopen("mydoc.txt", "r");
    if (fptr1 == NULL) {
        printf("Sorry failed to open the source file!!");
        return 1;
    }
    FILE *fptr2 = fopen("mydoc_copied.txt", "a");
    if (fptr2 == NULL) {
        printf("Sorry failed to open the target file");
        return 1;
    }
    char ch;
    while (1) {
        ch = fgetc(fptr1);
        if (ch == EOF) {
            break;
        } else {
        fputc(ch, fptr2);
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}