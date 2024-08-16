#include <stdio.h>
#include <string.h>

struct students{
        int roll;
        char name[50];
    };

int main(){
    struct students s1,s2,s3;

    s1.roll=1;
    strcpy(s1.name,"Apurva");

    printf("Roll is %d\nName is %s",s1.roll,s1.name);
    

    return 0;
}