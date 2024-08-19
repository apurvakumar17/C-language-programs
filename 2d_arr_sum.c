#include <stdio.h>

int main(){
    int col;
    int row;
    printf("Enter how many rows of 2D array: ");    
    scanf("%d",&row);
    printf("Enter how many columns of 2D array: ");    
    scanf("%d",&col);

    printf("WARNING ! Enter only one character\n");    
    char arr[row][col];
    getchar();

    int i,j;
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("Enter element [%d] [%d] of 2D array: ",i,j);
            scanf("%c",&arr[i][j]);
            getchar();
            printf("\n");
        }  
    }  

    printf("Entered 2D array of %d X %d is: \n",row,col);
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%c ",arr[i][j]);
        } 
        printf("\n");
    }                
    return 0;
}