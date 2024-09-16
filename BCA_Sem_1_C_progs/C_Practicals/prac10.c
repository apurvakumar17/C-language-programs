#include <stdio.h>

int main(){
    float sum=1;
    int i=2,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        if (i%2==0){
            sum=sum-(1.0/i);
        }else{
            sum=sum+(1.0/i);
        }
    }
    printf("%.2f",sum);
    return 0;
}