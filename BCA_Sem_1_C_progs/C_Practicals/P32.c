#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    float salary;
    
    printf("\nPractical 32, 04814902024, Apurva Kumar\n");
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(0);
    }
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%f", &salary);

    fprintf(file, "%s %d %.2f\n", name, age, salary);
    fclose(file);

    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(0);
    }
    fscanf(file, "%s %d %f", name, &age, &salary);

    printf("\nData read from file:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n\n", salary);
    fclose(file);
    return 0;
}