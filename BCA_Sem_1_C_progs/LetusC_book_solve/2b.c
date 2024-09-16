#include <stdio.h>

int main(){
    int dist;
    printf("Enter the distance in KM: ");
    scanf("%d",&dist);
    printf("Distance in meters: %d m\n",dist*1000);
    printf("Distance in feet: %.2f feet\n",dist*3280.84);
    printf("Distance in inches: %.2f inches\n",dist*39370.1);
    printf("Distance in centimetres: %.2f cm\n",dist*100000);
    return 0;
}