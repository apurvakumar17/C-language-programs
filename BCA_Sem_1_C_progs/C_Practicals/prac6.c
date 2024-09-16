#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    int isprime=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if (isprime==1){
        printf("%d is a prime",num);
    }else{
        printf("%d is not a prime",num);
    }
    return 0;
}