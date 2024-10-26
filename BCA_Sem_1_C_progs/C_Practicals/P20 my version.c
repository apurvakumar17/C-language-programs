#include <stdio.h>

int main(){
    int roco;
    printf("\nPractical 20, 04814902024, Apurva Kumar\n");
    printf("Enter no. of rows or columns: ");
    scanf("%d", &roco);
    int mat1[roco][roco];
    int mat2[roco][roco];

    printf("\nEnter matrix 1 elements: \n");
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("Enter element [%d,%d]: ",i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter matrix 2 elements: \n");
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("Enter element [%d,%d]: ",i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1: \n");
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2: \n");
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 1 + Matrix 2: \n");
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("%d\t", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 1 X Matrix 2: \n");
    int rc = 0;
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            for (int k = 0; k < roco; k++) {
                rc += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", rc);
            rc = 0;
        }
        printf("\n");
    }
    return 0;
}