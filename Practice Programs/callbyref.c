#include <stdio.h>
void disp(int* j) {
    printf("Got %d stored at %d by reference\n", *j, j);
    (*j)++;  //Original value of variable a getting updated using pointer
} 
int main(){
    int a = 2;
    disp(&a);
    disp(&a);
    disp(&a);
    disp(&a);
    return 0;
}