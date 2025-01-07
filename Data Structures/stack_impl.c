#include <stdio.h>
#include <stdlib.h>

int size;

void display (int* stack, int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d,",*(stack + i));
    }
}

void push(int* stack) {
    size++;
    stack = (int*) realloc(stack, size * sizeof(int));
    printf("Enter an element: ");
    scanf("%d", stack + size - 1);
    printf("Element pushed!");
}

void pop (int* stack) {
    if (size - 1 >= 0) {
        printf("Element poped: %d", *(stack + size - 1));
        size--;
        stack = (int*) realloc(stack, size * sizeof(int));
    } else {
        printf("Stack is empty !!");
    }
}

void showMenu(int* stack) {
    int choice;
    while (1) {
        printf("\n-------------------------\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("-------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack, size);
                break;
            case 4:
                return;
            default:
                printf("Invalid choice!!");        
        }
    }
}

int main() {
    int* stack;
    printf("Enter size of array: ");
    scanf("%d", &size);

    stack = (int*) malloc(size * sizeof(int));

    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < size; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &stack[i]);
    }

    display(stack, size);
    showMenu(stack);
    free(stack);
    return 0;
}