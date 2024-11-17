#include <stdio.h>

int main() {
    int a[2]; 
    a[0] = 12;  
    a[1] = 13;  
    printf("1st index = %d\n", a[0]); 
    printf("2nd index = %d\n", a[1]); 

    printf("New Array: \n");
    int b[5]={1,2,3,4,5};
    printf("1st index = %d\n", b[0]); 
    printf("2nd index = %d\n", b[1]);
    printf("3nd index = %d\n", b[2]);
    printf("4nd index = %d\n", b[3]);
    printf("5nd index = %d\n", b[4]);

    return 0;
}
