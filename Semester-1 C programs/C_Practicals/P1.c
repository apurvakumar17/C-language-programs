#include <stdio.h>

int main() {
    float basic, HRA, DA, grossSalary;
    printf("\nPractical 1, 04814902024, Apurva Kumar\n");
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic);
    if (basic < 1500) {
        HRA = 0.10 * basic;
        DA = 0.90 * basic;
    } else {
        HRA = 500;
        DA = 0.98 * basic;
    }
    grossSalary = basic + HRA + DA;
    printf("Gross Salary of the employee = %.2f\n\n", grossSalary);
    return 0;
}