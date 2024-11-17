#include <stdio.h>

int main() {
    int arr1[2][3] = { 12, 34, 23, 45, 56, 45 } ; 
    int arr2[ ][3] = { 12, 34, 23, 45, 56, 45 } ; 
    int arr3[2][3] = { {12, 34, 23}, {45, 56, 45} } ; 
    int arr4[ ][3] = { {12, 34, 23}, {45, 56, 45} } ;
    for (int i = 0; i < 2; i++) {
        printf("%d %d %d\n", arr4[i][0], arr4[i][1], arr4[i][2]);
    }
    return 0;
}