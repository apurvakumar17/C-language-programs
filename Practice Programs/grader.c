#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks percentage: ");
    scanf("%d",&marks);
    if (marks>=95){
        printf("A+ Grade!");
    }
    if (marks >=75 && marks<95){
        printf("A Grade!");
    }
    if (marks >=50 && marks <75){
        printf("B Grade!");
    }
    if (marks >=25 && marks <50){
        printf("C Grade!");
    }
    if (marks < 25){
        printf("D Grade!");
    }
    return 0;
}