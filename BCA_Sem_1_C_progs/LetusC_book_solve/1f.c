#include <stdio.h>

int main(){
    int C=12;
    int D=24;
    printf("Previous C = %d\n",C);
    printf("previous D = %d\n",D);
    int temp=C;
    C=D;
    D=temp;
    printf("Now C = %d\n",C);
    printf("Now D = %d\n",D);
    return 0;
}