#include <stdio.h>

int main(){
    char entry[50];
    printf("Enter the text which you want in file: ");
    gets(entry);
    FILE *fptr;
    fptr=fopen("filew.txt","w");
    fprintf(fptr,entry);
    printf("Data Entered !");
    fclose(fptr);
    return 0;
}