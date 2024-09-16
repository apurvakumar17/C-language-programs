#include <stdio.h>

int main(){
    int num,aor=0,ao=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        int digit = num % 10;
        digit = (digit + 1) % 10;
        aor=aor*10+digit;
        num=num/10;
    }
    while(aor!=0){
        ao=ao*10+(aor%10);
        aor=aor/10;
    }
    printf("%d",ao);
    return 0;
}