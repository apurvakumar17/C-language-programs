#include <stdio.h>
void changeto30(int*);
void changeto30(int*x){
    *x=*x * 10;
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    changeto30(&a);
    printf("Answer is: %d",a);
    return 0;
}