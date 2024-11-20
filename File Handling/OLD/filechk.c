#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("file.txt","r");
    if (ptr==NULL){
        printf("Sorry file doesn't exist !");
    }
    else{
        printf("File present and opened");
    }
    return 0;
}