#include <stdio.h>

int main(){
    int x=12;
    int y=6;
    int z=7;

    float x1=12;
    float y1=6;
    float z1=7;

    printf("%d and %d",x/y,x/z);
    printf("\n");

    printf("%f and %f",12.0/6.0,12.0/7.0);
    printf("\n");

    printf("%d and %d",(int)12.23,(int)12.0);
    printf("\n");

    printf("%f and %f",(float)123,(float)12/2);
    printf("\n");


    return 0;
}