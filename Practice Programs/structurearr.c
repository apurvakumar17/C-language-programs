struct class {
    int roll;
    char name[50];
    int marks;
    char grade;
};

#include <stdio.h>

int main(){

    int num;
    printf("How many students? ");
    scanf("%d",&num);

    struct class students[num];
    int i=0;
    for(i=0;i<num;i++){
        printf("Enter details of student %d:- \n",i+1);

        printf("Enter Roll No.: ");
        scanf("%d",&students[i].roll);
        getchar();

        printf("Enter Name: ");
        gets(students[i].name);

        printf("Enter Marks: ");
        scanf("%d",&students[i].marks);
        getchar();

        printf("Enter Grade: ");
        scanf("%c",&students[i].grade);
        getchar();
        printf("\n");
    }

    for(i=0;i<num;i++){
        printf("%d %s %d %c\n",students[i].roll,students[i].name,students[i].marks,students[i].grade);
    }
    
    return 0;
}