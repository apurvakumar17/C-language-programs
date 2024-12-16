#include <stdio.h>

int main() {
    FILE* fptr1;
    FILE* fptr2;
    fptr1 = fopen("ftell1.c", "r");
    fptr2 = fopen("copiedftell1.c", "w");
    char c1 = fgetc(fptr1);
    while (c1 != EOF) {
        printf("%c", c1);
        fputc(c1, fptr2);
        c1 = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}