#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Employee {
        char name[50];
        int age;
        float salary;
    };
    struct Employee emp;
    printf("\nPractical 33, 04814902024, Apurva Kumar\n");
    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter age: ");
    scanf("%d", &emp.age);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    FILE *file;
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(0);
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Data written to binary file successfully.\n");

    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    printf("\nData read from binary file:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n\n", emp.salary);
    return 0;
}