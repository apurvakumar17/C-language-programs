# include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the 1st number: ");
    scanf("%d",&n1);
    printf("Enter the 2nd number: ");
    scanf("%d",&n2);
    printf("Enter the 3rd number: ");
    scanf("%d",&n3);
    if (n1>n2){
        if (n1>n3){
            printf("%d is greatest number",n1);
        }else{
            printf("%d is greater number",n3);
        }
    }else{
        if (n2>n3){
            printf("%d is greatest number",n2);
        }else{
            printf("%d is greater number",n3);
        }
    }
    return 0;
}