/*#include <stdio.h>

int main() {
    FILE *fp;
    struct emp {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    char ch = 'Y';
    fp = fopen("EMPLOYEE.txt","w");
    while (ch == 'Y'||ch == 'y') {
        printf("Enter name,age,salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);
        printf("Want to enter more?: ");
        getchar();
        ch = getchar();
    }
    fclose(fp);


    fp = fopen("EMPLOYEE.txt","r");
    while (fscanf(fp, "%s %d %f",e.name, &e.age, &e.bs) != EOF) {
        printf("%s %d %f\n", e.name, e.age, e.bs);
    }
    fclose(fp);
    return 0;
}*/



#include <stdio.h>

int main() {
    FILE* fptr;
    struct emp {
        char name[40];
        char gender;
        int age;
    };
    struct emp e;
    fptr = fopen("Employee2.txt", "w");
    char ch = 'Y';
    while (ch == 'Y'||ch == 'y') {
        printf("Enter name gender age: ");
        scanf("%s %c %d", e.name, &e.gender, &e.age);
        fprintf(fptr, "%s %c %d\n", e.name, e.gender, e.age);
        getchar();
        printf("Enter more?(Y/N): ");
        ch = getchar();
    }
    fclose(fptr);

    fptr = fopen("Employee.txt", "r");
    while (fscanf(fptr,"%s %c %d", e.name, &e.gender, &e.age) != EOF) {
        printf("%s %c %d\n", e.name, e.gender, e.age);
    }
    fclose(fptr);
}