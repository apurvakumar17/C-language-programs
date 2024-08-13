#include <stdio.h>

int main(){
    
    char a[20];
    printf("Enter the string: ");
    gets(a);                       //can store strings with space also
    printf("Entered string is: %s",a);
    printf(" Hello..\n");
    
    char ab[20];
    printf("Enter the string: ");
    gets(ab);
    puts(ab);          //same as printf but adds a new line character after printing it
    printf(" Hello..\n");

    char a1[20];
    printf("Enter the string: ");
    scanf("%s",a1);                //can only store strings without spaces
    printf("Entered string is: %s",a1);   //ignores the string after space if space is given
    printf(" Hello..\n");   

    return 0;
}