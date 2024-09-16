#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5;
    printf("Enter marks for subject 1 : ");
    scanf("%d",&n1);
    printf("Enter marks for subject 2 : ");
    scanf("%d",&n2);
    printf("Enter marks for subject 3 : ");
    scanf("%d",&n3);
    printf("Enter marks for subject 4 : ");
    scanf("%d",&n4);
    printf("Enter marks for subject 5 : ");
    scanf("%d",&n5);
    printf("Aggregate Marks: %d/500\n",n1+n2+n3+n4+n5);
    printf("Aggregate percentage: %.2f %%",(n1+n2+n3+n4+n5)*0.2);
    return 0;
}