#include <stdio.h>
#include <stdlib.h>

int main() {
    int Arr[4][5];
    
    for (int i = 0; i < 4; i++) {
        printf("Enter 5 values for Row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &Arr[i][j]);
        }
    }
    //For example
    int row = 2;
    int col = 3;
    
    int computed_address = (int)(&Arr[0][0]) + (row * 5 + col) * sizeof(int);
    int actual_address = (int)(&Arr[row][col]);

    printf("Computed address of Arr[2][3]: %d\n", computed_address);
    printf("Actual address of Arr[2][3]: %d\n", actual_address);
    
    printf("\nApurva Kumar 04814902024");
    return 0;
}