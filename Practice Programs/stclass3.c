#include <stdio.h>

void hello() {
    static int i = 1;
    printf("Hi %d\n", i);
    i++;
}

int main() {
    hello();
    hello();
    hello();
    return 0;
}