#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, a[i]);
    }

    return 0;
}