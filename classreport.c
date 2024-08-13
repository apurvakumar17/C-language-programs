#include <stdio.h>

int main() {
    int num;
    int admno[50], marks600[50];
    char name[100][50]; // Can store up to 100 strings, each with a maximum length of 50 characters.
    int i;

    printf("How many students?: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Enter student admission no.: ");
        scanf("%d", &admno[i]);
        printf("Enter the student name: ");
        scanf("%s", name[i]);
        printf("Enter the marks of student out of 600: ");
        scanf("%d", &marks600[i]);
        printf("Data saved!\n");
    }

    printf("-----------------------------\n");
    printf("Admission No.\tStudent Name\tMarks Obtained\n");

    int j;
    for (j = 0; j < num; j++) {
        printf("%13d\t%12s\t%14d\n", admno[j], name[j], marks600[j]);
    }
    return 0;
}
