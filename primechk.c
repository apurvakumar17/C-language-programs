#include <stdio.h>

int main(){
    int num;
    int result=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num==1){
        printf("Invalid Number");
    }
    else{
        int c;
        
        for (c=2;c<num;c++){
            if(num%c==0){
                result++;
                break;
            }
        }
    }
    if (result==0){
        printf("Entered number is a Prime No.");
    }
    else{
        printf("Entered number is not a Prime No.");

    }
    return 0;
}