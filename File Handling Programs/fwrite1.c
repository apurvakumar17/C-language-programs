#include <stdio.h>

int main() {
    struct data {
        int num;
        char name[20];
        char grade;
    }d1[2];
    FILE* fptr1;
    fptr1 = fopen("structdata.bin", "w");
    for (int i = 0; i < 2; i++) {
        printf("Enter num%d: ", i);
        scanf("%d", &d1[i].num);
        getchar();
        printf("Enter your name%d: ", i);
        gets(d1[i].name);
        printf("Enter grade%d: ", i);
        d1[i].grade = getchar();

        fwrite(&d1[i], sizeof(d1[i]), 1, fptr1 );
    }
    fclose(fptr1);
    return 0;
}