#include <stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year%4==0 ){
        if (year%100==0 && year%400==0){
            printf("%d is an leap year",year);
        }
        else if (year%100==0){
            printf("%d is not an leap year",year);
        }else{
            printf("%d is an leap year",year);
        }
    }else{
        printf("%d is not an leap year",year);
    }
    return 0;
}