#include <stdio.h>
#define SIZE 5
int main() {
    int queue[SIZE], front, rear, ch, data;
    front = rear = -1;
    printf("CIRCULAR QUEUE USING ARRAY\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEP\n");
    printf("4. EXIT\n");
    while (1) {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                if (front == 0 && rear == SIZE - 1 || rear == front - 1) {
                    printf("Queue Overflow!\n");
                    printf("front: %d\nrear: %d\n\n", front, rear);
                } else {
                    printf("Enter data: ");
                    scanf("%d", &data);
                    if (front == -1) {
                        front++;
                        rear++;
                        queue[rear] = data;
                        printf("Entered data at %d\n", rear);
                        printf("front: %d\nrear: %d\n\n", front, rear);
                    } else {
                        rear++;
                        if (rear == SIZE) {
                            rear = 0;
                        }
                        queue[rear] = data;
                        printf("Entered data at %d\n", rear);
                        printf("front: %d\nrear: %d\n\n", front, rear);
                    }
                }
                break;
            case 2:
                if (front == -1) {
                    printf("Queue Underflow!\n");
                    printf("front: %d\nrear: %d\n\n", front, rear);
                } else {
                    data = queue[front];
                    printf("Popped Element: %d\n", data);
                    printf("front: %d\nrear: %d\n\n", front, rear);
                    front++;
                    if (front == rear) {
                        front = rear = -1;
                    } else if (rear < front && front == SIZE - 1) {
                        front = 0;
                    }
                }
                break;
            case 3:
                if (front == -1) {
                    printf("Queue is Empty!\n");
                    printf("front: %d\nrear: %d\n\n", front, rear);
                } else {
                    int i = front - 1;
                    while(i != rear + 1) {
                        printf("%d|", queue[i]);
                        i++;
                        if (rear < front && i == SIZE - 1) {
                            i = 0;
                        }
                    }
                }
                printf("\n");
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}