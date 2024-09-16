#include <stdio.h>
#include <math.h>

int main(){
    int n,x,flg=1;
    float sum=0,fact;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter length of series: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        if (i%2!=0 && flg==1){
            sum=sum+pow(x,i)/fact;
            flg=0;
        }else if (i%2!=0 && flg==0){
            sum=sum-pow(x,i)/fact;
            flg=1;
        }
    }
    printf("Sum of the series is: %f\n", sum);
    return 0;
}