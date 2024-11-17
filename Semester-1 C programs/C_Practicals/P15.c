#include <stdio.h>

float calcDiameter(float radius) {
    return 2 * radius;
}

float calcCircumference(float radius) {
    return 2 * (22.0 / 7.0) * radius;
}

float calcArea(float radius) {
    return (22.0 / 7.0) * radius * radius;
}

int main() {
    float radius;
    printf("\nPractical 15, 04814902024, Apurva Kumar\n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Diameter of the circle = %.2f\n", calcDiameter(radius));
    printf("Circumference of the circle = %.2f\n", calcCircumference(radius));
    printf("Area of the circle = %.2f\n\n", calcArea(radius));
    return 0;
}