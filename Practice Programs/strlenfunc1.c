#include <stdio.h>
#include <string.h>

int xstrlen(char *arr) {
    int leng = 0;
    while (*arr != '\0') {
        leng++;
        arr++;
    }
    return leng;
}

int main() {
    char name[] = "Apurva";
    char surname[] = "Kumar";

    int length = strlen(name);
    printf("Length of name = %d", length);
    int length2 = xstrlen(surname);
    printf("\nLength of name = %d", length2);

    return 0;
}