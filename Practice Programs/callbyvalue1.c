#include <stdio.h>

void call (char x) {
    printf("Why calling me? You are giving \"%c\"\n", x);
}
float avg (float a, float b, float c) {
    printf("Average of %.2f, %.2f & %.2f is: ", a, b, c);
    return (a + b + c)/3.0;
}
int main() {
    call('A');
    call('B');
    printf("%.2f\n", avg(12, 24, 24));
    int a = 1 ; 
    printf ( "%d %d %d", a, ++a, a++ ) ; 
    return 0;
}