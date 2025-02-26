#include <stdio.h>

int midSquareHash(int key) {
    int square = key * key;  
    int mid = (square / 10) % 10;  
    return mid % 10;
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++)
        arr[i] = -1;

    for (int i = 0; i < 5; i++) {
        int key;
        printf("Enter element to store: ");
        scanf("%d", &key);
        int index = midSquareHash(key);
        while (arr[index] != -1) {  
            index = (index + 1) % 10;
        }
        arr[index] = key;
    }

    for (int i = 0; i < 2; i++) {
        int data, flg = 0;
        printf("\nEnter element to search: ");
        scanf("%d", &data);
        int index = midSquareHash(data);
        int start = index;

        while (arr[index] != -1) { 
            if (arr[index] == data) {
                printf("Entered No. found at %d\n", index);
                flg = 1;
                break;
            }
            index = (index + 1) % 10; // Wrap around
            if (index == start) {
                break;
            } 
        }

        if (!flg) {
            printf("Entered No. not found\n");
        }
    }
    
    printf("\nApurva Kumar 04814902024");
    return 0;
}
