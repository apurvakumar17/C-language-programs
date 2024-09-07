#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter upper number: ");
    scanf("%d",&num1);
    printf("Enter lower number: ");
    scanf("%d",&num2);

    for (int j=num1;j<=num2;j++){
        int num=j;

        if (num <= 1) {
            printf("Entered number is not prime\n");
            return 0;
        }
        int isPrime = 1;
        for (int i = 2; i < (num - 1); i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number\n",num);
        } else {
            printf("%d is not prime\n",num);
        }
    }
}