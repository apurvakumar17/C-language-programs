#include <stdio.h>

int main() {
    int arr[][3] = {{12, 25, 63}, {84, 63, 52}, {65, 17, 45}};
    printf("%d\n", arr[0][1]); // 25
    printf("%d\n", *(arr[1])); //84
    printf("%d\n", *(arr[1]+2)); //52
    printf("%d\n", **(arr+2)); //65
    printf("%d\n", *(*(arr+2)+1)); //17
    return 0;
}