#include <stdio.h>
int main() {
    int mat[10];
    int ind = 0, data;
    for (int i = 0; i < 4; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &data);
            if (i == j || i == j - 1 || j == i - 1) {
                ind = 2 * i + j;
                mat[ind] = data;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j || i == j - 1 || j == i - 1) {
                ind = 2 * i + j;
                printf("%d ", mat[ind]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    printf("\nApurva Kumar 04814902024");
    return 0;
}