#include <stdio.h>

int main() {
    struct data {
        int num;
        char name[20];
        char grade;
    }d2[2];
    FILE* fptr2;
    fptr2 = fopen("structdata.bin", "r");
    if (fptr2 == NULL) {
        printf("Gadbad hai bhai !");
        return(1);
    }
    for (int i = 0; i < 2; i++) {
        fread(&d2[i], sizeof(d2[i]), 1, fptr2);
        printf("Name%d = %s\n", i, d2[i].name);
        printf("Grade%d = %c\n\n", i, d2[i].grade);
    }
    fclose(fptr2);
    return 0;
}