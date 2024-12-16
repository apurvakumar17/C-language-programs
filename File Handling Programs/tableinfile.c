#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("tableupto100.txt", "w");
    int n = 6;
    for (int i = 0; i < 100; i++) {
        fprintf(fptr, "%d X %d = %d\n", n, i, n * i);
    }
    fclose(fptr);
    return 0;
}