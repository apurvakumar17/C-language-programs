#include <stdio.h>
int main(){
    char entered;
    int ascii;
    printf("Enter any single character: ");
    scanf("%c",&entered);
    ascii=entered;
    printf("ASCII is: %d\n",ascii);
    if (  ascii>=48 && ascii<=57){
        printf("%c is a digit",entered);
    } else if (ascii>=65 && ascii<=90){
        printf("%c is a capital letter");
    } else if (ascii>=97 && ascii<=122){
        printf("%c is a small letter");
    } else{
        printf("%c is a special character");
    }
    return 0;
}