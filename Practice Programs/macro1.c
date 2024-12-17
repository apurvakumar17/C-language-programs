#include <stdio.h>
#define ROLL 17
#define ROLLI(x) x
#define ROLLY(y) printf("Roll number is = %d\n", y);

int main() {
    printf("Roll number is = %d\n", ROLL);
    printf("Roll number is = %d\n", ROLLI(23));
    ROLLY(26);
    return 0;
}