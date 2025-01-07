#include <stdio.h>
#include <stdlib.h>
int size;
// First In First Out used in Queue
void display(int* queue, int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d,", *(queue + i));
    }
    printf("\n");
}

void insert(int* queue) {
    printf("\n");
    size++;
    queue = (int*) realloc(queue, size * sizeof(int));
    printf("Enter an Element: ");
    scanf("%d", queue + size - 1);
    printf("Element inserted!");
    printf("\n");
}

int shifter(int* queue) {
    for (int i = 0; i < size; i++) {
        queue[i] = queue[i + 1]; 
    }
}

void delete(int* queue) {
    printf("\n");
    if (size - 1 >= 0) {
        printf("Deleted Element: %d", *(queue));
        size--;
        shifter(queue);
        queue = (int*) realloc(queue, size * sizeof(int));
        printf("\n");
    } else {
        printf("Queue is empty!");
    }
}

void showMenu(int* queue) {
    int choice;
    while (1) {
        printf("\n-------------------------\n");
        printf("1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n");
        printf("-------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert(queue);
                break;
            case 2:
                delete(queue);
                break;
            case 3:
                display(queue, size);
                break;
            case 4:
                return;
            default:
                printf("Invalid choice!!");        
        }
    }
}

int main() {
    int* queue;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    queue = (int*) malloc(size * sizeof(int));

    if (queue == NULL) {
        printf("Memory Allocation Failed !!");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter element%d: ", i + 1);
        scanf("%d", &queue[i]);
    }

    display(queue, size);
    showMenu(queue);
    free(queue);
    return 0;
}