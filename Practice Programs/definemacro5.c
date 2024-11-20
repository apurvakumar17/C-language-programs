#include <stdio.h>
#define STRINGIFY(x) #x
#define CONCAT(a, b) a##b
#define JOIN(a, b) #a #b

int main() {
    int xy = 23;
    printf("Name = %s\n","Apurva Kumar");
    printf("Name = %s\n",STRINGIFY(APURVA KUMAR));
    printf("%d\n", CONCAT(x, y));
    printf("Name = %s\n", JOIN(APURVA, kumar));
    return 0;
}