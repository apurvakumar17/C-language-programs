#include <stdio.h>
//chapter 1 H (a)
int main(){
    int salary;
    printf("Enter Ramesh's salary: ");
    scanf("%d",&salary);
    printf("Gross salary: %.2f",salary+salary*0.4+salary*0.2);
    return 0;
}