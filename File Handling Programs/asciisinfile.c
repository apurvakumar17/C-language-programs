#include <stdio.h>
#include <string.h>

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
    char cho[10] = "01";
    printf("%d", strlen(cho));
    fclose(fptr);
}