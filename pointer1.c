#include<stdio.h>

int main(){
    int i=17; //variable
    printf("Address of i is %p\n",&i); //printing address of i variable

    int *j=&i; //created pointer to store address of i
    printf("Address of i is %p\n",j); //printing address of i variable by pointer

    printf("Value at address stored in pointer j %d",*j);//getiing value from address
}