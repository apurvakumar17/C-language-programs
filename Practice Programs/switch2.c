#include <stdio.h>

int main(){

    int ch1;
    printf("1. Food \n 2.Beverage \n (1/2)?");
    scanf("%d",&ch1);

    switch(ch1){

        case 1 :{
        int ch2;
        printf("1.Burger \n 2.Pizza \n (1/2)?");
        scanf("%d",&ch2);

        switch(ch2){
            case 1 :
            printf("Take you Burger Sir.. ");
            break;
            case 2 :
            printf("Take your Pizza Sir..");
            break;
            default:
            printf("Invalid Choice !");
        }
        break;
        }
        case 2 :{
        int ch3;
        printf("1. Cola \n 2. Water\n (1/2)?");
        scanf("%d",&ch3);
        switch(ch3){
            case 1 :
            printf("Enjoy your chilled Cola Sir.. ");
            break;
            case 2 :
            printf("Enjoy your chilled Water Sir.. ");
            break;
            default:
            printf("Invalid Choice !");
        }
        break;
        }
        default:
            printf("Invalid Choice !"); 
    }
    return 0;
}