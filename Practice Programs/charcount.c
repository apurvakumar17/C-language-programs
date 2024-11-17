#include <stdio.h>

int main(){
    char string1[50];
    int i;
    int count;
    printf("Enter the string: ");
    // scanf("%s",string1); **unappropriate method
    gets(string1);
    
    for (i=0;string1[i]!='\0';i++){
        count++;
    }
    printf("Number of letters are = %d",count);
    return 0;
    
}