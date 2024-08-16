#include <stdio.h>

struct class3 {
    int roll;
    char name[50];
    int marks;
};

int main(){
    struct class3 s1, s2, s3;

    printf("Enter Roll No.: ");
    scanf("%d", &s1.roll);
    getchar();  //to consume the newline chcracter left by scanf
    printf("Enter Name: ");
    gets(s1.name);
    printf("Enter the Marks: ");
    scanf("%d", &s1.marks);

    printf("Enter Roll No.: ");
    scanf("%d", &s2.roll);
    getchar();
    printf("Enter Name: ");
    gets(s2.name);
    printf("Enter the Marks: ");
    scanf("%d", &s2.marks);

    printf("Enter Roll No.: ");
    scanf("%d", &s3.roll);
    getchar();
    printf("Enter Name: ");
    gets(s3.name);
    printf("Enter the Marks: ");
    scanf("%d", &s3.marks);

    printf("Student1: %d, %s, %d\n", s1.roll, s1.name, s1.marks);    
    printf("Student2: %d, %s, %d\n", s2.roll, s2.name, s2.marks);
    printf("Student3: %d, %s, %d\n", s3.roll, s3.name, s3.marks);    

    return 0;
}
