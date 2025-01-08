#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("How many chars will you enter? ");
    scanf("%d", &n);
    
    char* arr;
    arr = (char*) malloc(n * sizeof(char));

    /*for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        getchar();
        scanf("%c", &arr[i]);
    }*/

   printf("Enter string: ");
   scanf("%s", arr);

    int q = 97;
    char hash[26] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", i + 97, hash[i]);
    }
    return 0;
}