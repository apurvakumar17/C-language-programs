#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("mydoc3.dat", "wb");
    char ch = 'Y';
    struct student {
        char name[20];
        int age;
        char gender;
    };
    struct student s;
    while (ch == 'Y' || ch == 'y') {
        printf("Enter name age gender: ");
        scanf("%s %d %c", s.name, &s.age, &s.gender);
        fwrite(&s, sizeof(s), 1, fptr);
        getchar();
        printf("Enter more record?(Y/N): ");
        ch = getchar();
    }
    fclose(fptr);
    fptr = fopen("mydoc3.dat", "rb");
    while(fread(&s, sizeof(s), 1, fptr) == 1) {
        printf("%s %d %c\n", s.name, s.age, s.gender);
    }
    fclose(fptr);
    return 0;
}