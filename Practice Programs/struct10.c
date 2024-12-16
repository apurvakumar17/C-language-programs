#include <stdio.h>
#include <string.h>

int main() {
    struct id {
        int card;
        char aadhar[20];
        char voterid[20];
        char pancard[10];
    }anu;
    struct id apurva = {1, "I have", "NEJ10101", "PANOIND"};
    printf("%d\n", apurva.card);
    puts(apurva.aadhar);

    //anu.aadhar = "i do not have";
    strcpy(anu.aadhar, "I do not have");
    printf("%s", anu.aadhar);
    strdup(anu.pancard, "I do not have pan");
    printf("%s", anu.pancard);
    return 0;
}