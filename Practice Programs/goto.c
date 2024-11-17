#include <stdio.h>

int main() {
    int a;
    lin:
    scanf("%d",&a);
    printf("Hello..");
    if(a==1){
        goto lin;
    }
    return 0;
}