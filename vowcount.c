#include <stdio.h>

int main(){
    char word[50];
    int count=0;
    printf("Enter the word to check: ");
    gets(word);
    char vow[5]={'a','e','i','o','u'};
    int i=0;
    while (word[i]!='\0'){
        for (int j=0;j<5;j++){
            if(word[i]==vow[j]){
                count++;
                
                break;
            }
        }
        i++;
    }
    printf("Total %d vowels found in '%s'.",count,word);
    return 0;
}