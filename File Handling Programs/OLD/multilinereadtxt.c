#include <stdio.h>

int main(){
    char content[100];
    FILE *fptr;
    fptr=fopen("numbook.txt","r");
    while(fgets(content,100,fptr)){
        printf("%s",content);
    }
    return 0;
}