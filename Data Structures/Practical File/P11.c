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
    int ch;
    int queue[SIZE];

    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                if (rear == SIZE - 1) {
                    printf("Queue Overflow!\n");
                } else {
                    if (front == -1) front = 0;
                    rear++;
                    printf("Enter data: ");
                    scanf("%d", &queue[rear]);
                    printf("Element Pushed!\n");
                }
                break;
            }
            case 2: {
                if (front == -1 || front > rear) {
                    printf("Queue Underflow!\n");
                    front = rear = -1;  
                } else {
                    printf("Popped Element: %d\n", queue[front]);
                    for (int i = front; i < rear; i++) {
                        queue[i] = queue[i + 1];
                    }
                    rear--;
                    if (front > rear) {
                        front = rear = -1; 
                    } 
                }
                break;
            }
            case 3: {
                if (front == -1 || front > rear) {
                    printf("Queue Empty!\n");
                } else {
                    printf("Queue Elements:\n");
                    for (int i = front; i <= rear; i++) {
                        printf("|%d|\n", queue[i]);
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
