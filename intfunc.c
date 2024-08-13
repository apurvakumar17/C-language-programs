#include <stdio.h>

int sum(int,int);
int sum(int x,int y){
    return (x+y);
}

int main(){
    int a;
    int b;
    int t;
    printf("How many times you want sum?: ");
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        printf("Sum is = %d \n",sum(a,b));
    }
    return 0;
}