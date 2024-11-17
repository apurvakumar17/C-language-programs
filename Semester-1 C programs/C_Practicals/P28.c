#include <stdio.h>

int main(){
    struct student {
        char name[10];
        int marks[3];
        int total;
        int percentage;
    };
    struct student stud[5];
    int i, j;
    printf("\nPractical 28, 04814902024, Apurva Kumar\n");

    for (i = 0; i < 5; i ++) {
        printf("Enter Student %d Details: \n", i+1);
        printf("Name: ");
        scanf("%s", &stud[i].name);
        getchar();

        for (j = 0; j < 3; j ++) {
            printf("Enter marks of subject %d out of 100: ", j+1);
            scanf("%d", &stud[i].marks[j]);
        }
        stud[i].total = stud[i].marks[0] + stud[i].marks[1] + stud[i].marks[2];
        stud[i].percentage = 100.0 * ((float)stud[i].total / 300.0);
        printf("\n");
    }
    for (i = 0; i < 5; i ++) {
        printf("--Student %d Details--\n", i+1);
        printf("Name: %s\n", stud[i].name);
        
        for (j = 0; j < 3; j ++) {
            printf("Marks of subject %d: %d\n", j+1, stud[i].marks[j]);
        }
        printf("Total marks out of 300: %d\n", stud[i].total);
        printf("Total Percentage: %d\n\n", stud[i].percentage);
    }
    return 0;
}