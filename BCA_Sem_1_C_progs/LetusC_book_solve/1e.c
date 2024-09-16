#include <stdio.h>

int main(){
    int l,b,r;
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    printf("Area of rectangle: %d unitsquares\n",l*b);
    printf("Perimeter of rectangle: %d units\n",2*(l+b));
    printf("Area of circle: %.2f unitsquares\n",(22.0/7)*r*r);
    printf("Circumference of circle: %.2f units\n",2*(22.0/7)*r);
    return 0;
}