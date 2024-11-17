#include <stdio.h>

int main(){
    register int x = 12;
    printf("%d ", x);
    x++;
    printf("%d ", x);
    return 0;
}