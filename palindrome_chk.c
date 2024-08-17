#include <stdio.h>
#include <string.h>

int main(){

    printf("Enter the string to check: ");
    char stg[50];
    char revstg[50];
    scanf("%s",stg);

    int lnt=strlen(stg);
    int i,j;
    for (i=lnt-1, j=0; i>=0; i--,j++){
        revstg[j]=stg[i];
    }
    revstg[j]='\0';
    printf("Reversed string is: %s\n",revstg);
    if (strcmp(stg,revstg)==0){
        printf("The string is a palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }
    return 0;
}