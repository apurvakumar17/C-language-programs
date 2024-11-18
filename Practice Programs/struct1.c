#include <stdio.h>

int main() {
    struct mydata {
        char name[20];
        int age;
        char gender;
    } s1;
    struct mydata s2;

    struct {
        char name[20];
        int class;
        int roll;
    } student1, student2;
    
    printf("Enter your name: ");
    scanf("%[^\n]s", &s1.name);
    printf("Enter your age: ");
    scanf("%d", &s1.age);
    getchar();
    printf("Enter your gender(M/F): ");
    scanf("%c", &s1.gender);

    printf("\nName: %s\nAge: %d\nGender: %c", s1.name, s1.age, s1.gender);
    return 0;
}