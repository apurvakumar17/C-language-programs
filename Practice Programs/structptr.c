#include <stdio.h>

struct school {
        char name[20];
        int age;
        char gender;
};

void display(struct school *structure2) {
    printf("\nName: %s\nAge: %d\nGender: %c", structure2->name, structure2->age, structure2->gender);
}

int main() {
    
    struct school apu = {"Apurva Kumar", 18, 'M'};
    
    struct school *ptr;

    ptr = &apu;

    printf("Name: %s\nAge: %d\nGender: %c", ptr->name, ptr->age, ptr->gender);
    display(&apu);
    return 0;
}