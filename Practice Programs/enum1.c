#include <stdio.h>

int main() {
    enum marital_status {
        single,
        married,
        divorced,
        widowed
    };
    enum marital_status apurva, shreyas;
    apurva = married;
    
    printf("Marital status: %d", apurva);
    return 0;
}