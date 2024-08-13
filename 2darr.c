#include <stdio.h>

int main(){
    int arr [3][2]={{1,2},
                    {3,4},
                    {5,6}};

    int arr2[2][2];
    arr2[0][0]=1;
    arr2[0][1]=2;
    arr2[1][0]=3;
    arr2[1][1]=4;
    printf("%d \n",arr[0][0]);
    printf("%d",arr2[0][0]);
}