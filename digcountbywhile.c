#include <stdio.h>
int main(){
    int num;
    int digs=0;
    printf("Enter the number to check digits: ");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        digs++;

    }
    printf("Number of digits are: %d",digs);
    return 0;
}