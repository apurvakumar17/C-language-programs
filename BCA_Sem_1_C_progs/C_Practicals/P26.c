#include <stdio.h>

int main(){
    struct emp {
        int empid;
        char empname[50];
        long empsal;
    };
    struct emp e1;
    printf("\nPractical 26, 04814902024, Apurva Kumar\n");
    printf("Enter Employee ID: ");
    scanf("%d", &e1.empid);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]%*c", e1.empname);
    printf("Enter Employee Salary: ");
    scanf("%ld", &e1.empsal);
    
    printf("\nEmployee ID: %d\nEmployee Name: %s\nEmployee Salary: %ld\n\n",e1.empid,e1.empname,e1.empsal);
    return 0;
}