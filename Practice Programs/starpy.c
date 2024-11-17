#include <stdio.h>

int main(){
    int a1;
    printf("Enter the no. of levels (odd only): ");
    scanf("%d",&a1);

    if (a1%2!=0){
        int x=a1-1;
        int star=1;

        for(int a=1;a<=a1;a++){

            for (int a2=1;a2<=x;a2++){
                printf(" ");
            }
            for (int a10=1;a10<=star;a10++){
                printf("*");
            }
            x--;
            for (int a2=1;a2<=x;a2++){
                printf(" ");
            }
            star=star+2;
            printf("\n");
        }
    }

    else{
        printf("Invalid Input");
    }

    return 0;
}