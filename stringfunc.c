#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="Apurva";
    char str2[]="Kumar";
    printf("Length of string is: %d\n",strlen(str1));

    char target[20];
    strcpy(target,str1);
    printf("Copied string is: %s\n",target);

    strcat(str1,str2);
    printf("Concatinated string is: %s\n",str1);
    return 0;
}