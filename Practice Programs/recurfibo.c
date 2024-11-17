#include <stdio.h>

int recursion(int a,int b, int n){
    int next=a+b;
    printf("%d ",next);
    if (n!=0){
        n--;
        recursion(b,next,n);
    }
}

int main(){
    int n=0;
    printf("Enter length of fibonacci: ");
    scanf("%d",&n);
    printf("1 1 ");
    recursion(1,1,n-3);
    return 0;
}