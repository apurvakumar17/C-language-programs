#include <stdio.h>

int main(){

    FILE *ptr;    //file pointer
    ptr=fopen("textbook.txt","r");  //opening file

    char name1[50];   //variable to store 
    fgets(name1,100,ptr);  // reading file upto 100 characters 
    printf("%s", name1);  // and storing in name1 variable
    fclose(ptr);         // closing the file
    return 0;
}