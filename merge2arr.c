#include <stdio.h>
#include <string.h>

int main(){
    char arr1[20];
    printf("Enter the string for array1: ");
    gets(arr1);
    int arr1l=strlen(arr1);
    char arr2[20];
    printf("Enter the string for array2: ");
    gets(arr2);
    int arr2l=strlen(arr2);

    printf("Array 1 with %d elements is: %s\n",arr1l,arr1);
    printf("Array 2 with %d elements is: %s\n",arr2l,arr2);

    char merged[40];
    int i,j;
    for (i=arr1l,j=0;i<arr1l+arr2l;i++,j++){
        arr1[i]=arr2[j];
    }
    printf("Merged array is: %s",arr1);
    return 0;
}