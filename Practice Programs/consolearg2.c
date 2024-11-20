#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char* name = argv[1];
    int times = atoi(argv[2]);
    for (int i = 0; i < times; i++) {
        printf("%s\n",name);
    }
    return 0;
}