#include <stdio.h>
void swap(int*,int*);
int main(){
    int x,y;
    printf("Enter Value of X: ");
    scanf("%d",&x);
    printf("Enter Value of Y: ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("Swapped..\n");
    printf("Value Of X: %d \nValue of Y: %d ",x,y);
    return 0;
}

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}