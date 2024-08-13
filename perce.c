#include <stdio.h>
int main(){
    int a=4;        //   <------------   //
    printf("%d %d %d \n", a, ++a , a++);
    // output will be 6 6 4
    return 0;
}