#include<stdio.h>
int main(){
    int year;
    printf("Enter the year to check: ");
    scanf("%d",&year);
    if (year%100==0){
        if (year%400==0){
            printf("Entered year is leap year");
        }
        else{
            printf("Entered year is not leap year");
        }
    }
    else if(year % 4==0){
        printf("Entered year is leap year");
    }
    else{
        printf("Entered year is not a leap year");
    }
    return 0;
}