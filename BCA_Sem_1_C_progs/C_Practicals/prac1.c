# include <stdio.h>
int main(){
    int salary;
    printf("Enter your salary: ");
    scanf("%d",&salary);
    if (salary<1500){
        printf("Total salary= %f",salary+(0.9*salary)+(0.1*salary));   
    }else if(salary>=1500){
        printf("Total salary= %f", salary+500+(0.98*salary));
    }else{
        printf("Invalid Salary !!");
    }
}