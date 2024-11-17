#include<stdio.h>
int main(){
    int a=12;
    int b=6;
    (a==b)?printf("True\n"):printf("False\n");
    b=(a==b)?6:12;
    (a==b)?printf("True\n"):printf("False\n");
    return 0;
}