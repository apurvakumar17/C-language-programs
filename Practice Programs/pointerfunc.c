#include <stdio.h>

void swap(int*,int*);
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=3;
    int b=4; //a is 3 and b is 4
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}