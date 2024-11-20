#include <stdio.h>
#define LOOPER(x) {\
    for (int i = 0; i< x; i++) {\
        printf("%d\n", i);\
    }\
}
int main() {
    LOOPER(10);
    LOOPER(5);
    return 0;
}