#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7};
    int* ptr=a;
    printf("Value at %u is %d\n",ptr,*ptr); //first address gives first element
    printf("Value at %u is %d\n",ptr+1,*ptr+1); //second address(+1) gives second element 
    printf("Value at %u is %d\n",ptr+2,*ptr+2); //third address(+2) gives third element
    return 0;
}

