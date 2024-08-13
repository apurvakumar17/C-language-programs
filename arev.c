#include <stdio.h>
int main(){
    int array[7]={2,5,10,17,6,31,40};
    for (int i=6;i>=0;i--){
        printf("%d postion element= %d\n",i,array[i]);
    }
    return 0;
}