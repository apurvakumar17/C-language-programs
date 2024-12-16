#include <stdio.h>

int main() {
    union bff {
        int fr1;
        int fr2;
    };
    union bff apurva;
    apurva.fr1 = 1;
    printf("%d\n", apurva.fr1);
    return 0;
}