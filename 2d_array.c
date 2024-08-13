#include <stdio.h>

int main(){
    int arr2d[3] [2];

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("Enter the element to enter at [%d][%d]: ",i,j);
            scanf("%d",&arr2d[i][j]);
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            printf("Element at [%d][%d]: %d\n",i,j,arr2d[i][j]);
        }
    }
    return 0;
}