#include <stdio.h>
#include <stdlib.h>
int main() {
    int mat[3][3];
    int isLower = 1, isUpper = 1, isTridiagonal = 1;

    printf("Enter a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter row %d: ", i);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i < j && mat[i][j] != 0) isLower = 0;       
            if (i > j && mat[i][j] != 0) isUpper = 0;  
            if (abs(i - j) > 1 && mat[i][j] != 0) isTridiagonal = 0;
        }
    }
    printf("\nMatrix type:\n");
    if (isLower) printf("Lower Triangular Matrix\n");
    if (isUpper) printf("Upper Triangular Matrix\n");
    if (isTridiagonal) printf("Tridiagonal Matrix\n");
    if (!isLower && !isUpper && !isTridiagonal)
        printf("Matrix is none of the above types.\n");
    printf("\nApurva Kumar 04814902024\n");
    return 0;
}