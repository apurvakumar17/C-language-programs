#include <stdio.h>
#define LIMIT 'A'
#define LOOPER {\
    int i = LIMIT;\
    while (i <= 'Z') {\
        printf("%c", i);\
        i++;\
    }\
}
int main() {
    LOOPER;
    return 0;
}