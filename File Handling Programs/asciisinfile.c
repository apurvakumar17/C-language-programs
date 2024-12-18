#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("allchars.txt", "w+");
    char ch;
    for (int i = 0; i <= 127; i++) {
        ch = i;
        fprintf(fptr, "%d ", i);
        fputc(ch, fptr);
        fputc('\n', fptr);
    }
    rewind(fptr);
    char gch;
    while (fgetc())
    fclose(fptr);
}