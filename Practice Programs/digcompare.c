#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter num1 (10-99): ");
    scanf("%d",&n1);
    printf("Enter num2 (10-99): ");
    scanf("%d",&n2);
    if ((n1/10==n2/10) || (n1/10==n2%10) || (n1%10==n2/10) || (n1%10==n2%10)){
        printf("Something is common");
    }else{
        printf("Nothing is common");
    }
    return 0;
}