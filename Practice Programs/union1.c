#include <stdio.h>

int main() {
    union class12a {
        int monitor;
        int toppers;
    };
    union class12a a12;
    a12.monitor = 1;
    printf("No. of monitor = %d\n", a12.monitor);
    printf("No. of toppers = %d\n", a12.toppers);
    a12.toppers = 12;
    printf("No. of monitor = %d\n", a12.monitor); //both monitor and toppers share same memory
    printf("No. of toppers = %d\n", a12.toppers); //both monitor and toppers share same memory
    return 0;
}