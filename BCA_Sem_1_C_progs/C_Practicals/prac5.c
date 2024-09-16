#include <stdio.h>

int main(){
    int temp,temp2,x;
    printf("Printing all the armstrong number b/w 1 and 500\n");
    for (int i=1;i<=500;i++){
        temp2=i;
        temp=0;
        while(temp2!=0){
            x=temp2%10;
            temp=temp+(x)*(x)*(x);
            temp2=temp2/10;
        }
        if (temp==i){
            printf("%d is an armstrong number \n",i);
        }
    }
    return 0;
}