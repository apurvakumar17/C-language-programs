#include <stdio.h>

int main(){
    printf("\nPractical 8, 04814902024, Apurva Kumar\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i ++){
        printf("%d X %d = %d\n", num, i, num * i);
    }
    printf("\n");
    return 0;
}