#include <stdio.h>
int main() {
    enum WEEK {mon, tue, wed, thurs, fri, sat, sun};
    enum WEEK bday;
    bday = fri;
    printf("%d", bday);
}