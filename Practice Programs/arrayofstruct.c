#include <stdio.h>

int main() {
    struct mydata {
        char name[20];
        int age;
        char gender;
    };

    struct mydata class1[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details of Student %d: \n", i+1);
        printf("Enter name: ");
        scanf("%[^\n]s", &class1[i].name);
        printf("Enter age: ");
        scanf("%d", &class1[i].age);
        getchar();
        printf("Enter gender(M/F): ");
        scanf("%c", &class1[i].gender);
        getchar();
    }

    for (int i = 0; i < 6; i++) {
        printf("Student %d:\nName: %s\nAge: %d\nGender: %c\n", i+1, class1[i].name, class1[i].age, class1[i].gender);
    }
    return 0;
}