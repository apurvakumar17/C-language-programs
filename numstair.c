#include <stdio.h>

int main(){
    
    int lev;
    int a;
    int n=1;
    int a1;

    printf("How many levels?: ");
    scanf("%d",&lev);
    for (a=1;a<=lev;a++){
        
        for (a1=1;a1<=n;a1++){
            printf("%d",a1);
        }
        printf("\n");
        n++;
    }
    return 0;
}