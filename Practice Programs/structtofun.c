#include <stdio.h>

    struct data {
        int num;
        char grade;
    } d1;

    void dikhao(struct data *name) {
        printf("Number: %d\n", name->num);
        printf("Grade: %c", name->grade);
    }
    
int main() {
    
    d1.num = 1234;
    d1.grade = 'A';
    dikhao(&d1);

    return 0;
}