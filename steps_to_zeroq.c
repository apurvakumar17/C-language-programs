#include <stdio.h>
int numberOfSteps(int num) {
    int steps=0;
    while (num!=0){
        if (num%2==0){
            num=num/2;
            steps++;
        }else if (num%2!=0){
            num=num-1;
            steps++;
        }
    }
    return steps;
}
int main(){
    printf("%d",numberOfSteps(12));
    int x=-123;
    printf("%d",x);
    return 0;
}