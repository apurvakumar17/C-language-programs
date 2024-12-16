#include <stdio.h>
void dikhao();
int main() {
    for (int i = 0; i < 10; i++) {
        dikhao();
    }
    typedef int numberwa;

    struct kuchbhi {
        int number;
    };
    typedef struct kuchbhi nn;
    nn n1;
    n1.number = 456;
    printf("%d\n", n1.number);
    return 0;
}

void dikhao() {
    static int x = 1;
    printf("%d\n", x++);
}