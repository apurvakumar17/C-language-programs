#include <stdio.h>
#define SIZE 5

int main() {
    printf("|QUEUE USING ARRAY MENU|\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEP\n");
    printf("4. EXIT\n");
    int front = -1;
    int rear = -1;
    int ch, frch, data;
    int dequeue[SIZE];

    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                if (rear == SIZE - 1) {
                    printf("Dequeue Overflow!\n");
                } else {
                    printf("Choose Position to PUSH:\n");
                    printf("1. FRONT\n");
                    printf("2. REAR\n");
                    printf("Enter choice: ");
                    scanf("%d", &frch);
                    if (frch == 1) {
                        for (int i = SIZE - 1; i >=0; i-- ) {
                            dequeue[i + 1] = dequeue[i];
                        }
                        if (front == -1) {
                            front = 0;
                        }
                        rear++; 
                        printf("Enter data: ");
                        scanf("%d", &dequeue[front]);
                        printf("Data pushed in FRONT\n");
                    } else if (frch == 2) {
                        if (front == -1) {
                            front = 0;
                        }
                        rear++; 
                        printf("Enter data: ");
                        scanf("%d", &dequeue[rear]);
                        printf("Data pushed in REAR\n");
                    } else {
                        printf("Invalid choice!\n");
                    }
                }
                break;
            }
            case 2: {
                if (rear == -1) {
                    printf("Dequeue Underflow!\n");
                } else {
                    printf("Choose Position to POP:\n");
                    printf("1. FRONT\n");
                    printf("2. REAR\n");
                    printf("Enter choice: ");
                    scanf("%d", &frch);
                    if (frch == 1) {
                        printf("Popped Element: %d from FRONT\n", dequeue[front]);
                        for (int i = front; i < rear; i++) {
                            dequeue[i] = dequeue[i + 1];
                        }
                        rear--;
                        if (rear == -1) {
                            front = -1;
                        }
                    } else if (frch == 2) {
                        printf("Popped Element: %d from REAR\n", dequeue[rear]);
                        rear--;
                        if (rear == -1) {
                            front = -1;
                        }
                    } else {
                        printf("Invalid choice!\n");
                    }
                }
                break;
            }
            case 3: {
                if (front == -1) {
                    printf("Deqeue Empty!\n");
                } else {
                    printf("Deqeue Elements:\n");
                    for (int i = front; i <= rear; i++) {
                        printf("|%d|\n", dequeue[i]);
                    }
                }
                break;
            }
            case 4: {
                printf("\nApurva Kumar 04814902024\n");
                return 0;
            }
            default: {
                printf("Invalid Choice!\n");
            }
        }
    }
}
