#include <stdio.h>

int main(){
    int a=1; //True
    int b=0; // False

    printf("%d",a && b); // and operator
    printf("%d",a || b); // or operator
    printf("%d",!a); // not operator
    printf("%d",!b); // not operator

    return 0;
}