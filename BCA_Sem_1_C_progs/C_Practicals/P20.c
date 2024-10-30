#include <stdio.h>

void inputMatrix(int roco, int mat[roco][roco], int matrixNumber) {
    printf("\nEnter matrix %d elements: \n", matrixNumber);
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int roco, int mat[roco][roco]) {
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void sumMatrices(int roco, int mat1[roco][roco], int mat2[roco][roco], int result[roco][roco]) {
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int roco, int mat1[roco][roco], int mat2[roco][roco], int result[roco][roco]) {
    for (int i = 0; i < roco; i++) {
        for (int j = 0; j < roco; j++) {
            result[i][j] = 0;
            for (int k = 0; k < roco; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int roco;
    printf("\nPractical 20, 04814902024, Apurva Kumar\n");
    printf("Enter no. of rows or columns: ");
    scanf("%d", &roco);
    
    int mat1[roco][roco], mat2[roco][roco];
    int sum[roco][roco], product[roco][roco];
    
    inputMatrix(roco, mat1, 1);
    inputMatrix(roco, mat2, 2);
    
    printf("\nMatrix 1:\n");
    displayMatrix(roco, mat1);
    
    printf("\nMatrix 2:\n");
    displayMatrix(roco, mat2);
    
    sumMatrices(roco, mat1, mat2, sum);
    printf("\nMatrix 1 + Matrix 2:\n");
    displayMatrix(roco, sum);
    
    multiplyMatrices(roco, mat1, mat2, product);
    printf("\nMatrix 1 X Matrix 2:\n");
    displayMatrix(roco, product);
    
    return 0;
}