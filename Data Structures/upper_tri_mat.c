#include <stdio.h> 

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {0, 5, 6, 7},
        {0, 0, 8, 9},
        {0, 0, 0, 10}
    };
    int flag = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i; j++) {  
            if (mat[i][j] != 0) {
                flag = 0; 
                break; 
            }
        }
        if (flag == 0) {
            break; 
        }
    }
    if (flag) {
        printf("Upper Triangular Matrix\n");
    } else {
        printf("Not a Triangular Matrix\n");
    }
    return 0;
}
