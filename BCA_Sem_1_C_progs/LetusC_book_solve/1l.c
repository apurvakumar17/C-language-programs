#include <stdio.h>

int main(){
    int sp,tp;
    printf("Enter the total selling price of 15 items: ");
    scanf("%d",&sp);
    printf("Enter the total profit: ");
    scanf("%d",&tp);
    printf("Cost price of each item = %d",(sp-tp)/15);
    return 0;
}