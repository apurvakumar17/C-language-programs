# include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd number: ");
    scanf("%d",&b);
    printf("\nEnter 3rd number: ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("%d is the largest",a);
        }
    }
    if (b>a){
        if (b>c){
            printf("%d is the largest",b);
        }
    }
    if (c>a){
        if (c>b){
            printf("%d is the largest",c);
        }
    }
    return 0;
}