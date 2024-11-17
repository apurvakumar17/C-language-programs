#include <stdio.h>

void display(int*arr,int len){
    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void reverse(int* arr, int len){
    int i=0;
    int j=len-1;
    int temp;
    if (len%2!=0){
        while (i!=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }else{
        while (i!=j-1){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
}


int main(){
    int l;
    printf("Enter length of array you want to make: ");
    scanf("%d",&l);
    int arr[50];
    for (int j=0;j<l;j++){
        printf("Enter Element %d: ",j+1);
        scanf("%d",&arr[j]);
    }
    display(arr,l);
    reverse(arr,l);
    printf("\nReversed...\n");
    display(arr,l);
    return 0;
}