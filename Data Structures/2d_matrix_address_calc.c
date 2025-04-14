#include <stdio.h>
int main() {
    int mat[3][4];
    int base_address = 1000;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            mat[i][j] = i + j * 2;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int i = 1; int row = 3;
    int j = 2; int column = 4;
    int size = sizeof(int);
    //Row major
    printf("Address if Row Major: %d\n", base_address + (column * i + j) * size);
    //Column major
    printf("Address if Column Major: %d", base_address + (row * j + i) * size);
}