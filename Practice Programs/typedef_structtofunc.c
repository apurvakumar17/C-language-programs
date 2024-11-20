#include <stdio.h>
struct boyage {
    int age;
    char gender;
};

void display (struct boyage *aa) {
    printf("\nYou are %d year old %c", aa->age, aa->gender);
}

int main() {
    typedef struct boyage AGER;
    struct boyage *ptr, *jago;
    AGER apurva = {18, 'M'};
    AGER rekha = {30, 'F'};
    ptr = &apurva;
    jago = &rekha;
    display(ptr);
    display(jago);
    return 0;
}