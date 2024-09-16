#include <stdio.h>

int main(){
    int n1=0,n2=1,nt=0;
    printf("\nTerm 1: %d\nTerm 2: %d\n",n1,n2);
    for (int i=3;i<=20;i++){
        nt=n1+n2;
        printf("Term %d: %d\n",i,nt);
        n1=n2;
        n2=nt;
    }
    return 0;
}