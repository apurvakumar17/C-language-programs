#include <stdio.h>

int main() {
    int arr2d[5][2] = {{1, 85}, {2, 95}, {3,90}, {4, 99}, {5,89}};
    int (*ptr) = arr2d;
    for (int i = 0; i < 10; i++) {
        printf("Value at %d is %d\n", ptr, *ptr);
        ptr++;
    }
    return 0;
}