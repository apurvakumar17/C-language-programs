#include <stdio.h>

int* function(int *m) {
    return m;
}
int main() {
    int i = 35, *z;
    z = function(&i);
    printf("\n%d", z);
    return 0;
}