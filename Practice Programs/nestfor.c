#include <stdio.h>

int main(){
    int n;
    int a1;
    int a2;
    printf("Enter the number upto which you want the tables: ");
    scanf("%d",&n);
    for(a1=1;a1<=n;a1++){
        for(a2=1;a2<=10;a2++){
            printf("%d X %d = %d \n",a1,a2,a1*a2);
        }
        printf("\n");
    }
    return 0;
}