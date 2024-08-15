#include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    printf("Enter the string: ");
    gets(string);
    int len=strlen(string);
    printf("Reversed form of string is: ");
    for(int i=len-1;i>=0;i--){
        printf("%c",string[i]);
    }
    return 0;
}