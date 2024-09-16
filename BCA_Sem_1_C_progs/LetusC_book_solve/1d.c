#include <stdio.h>

int main() {
    float tempf, tempc;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &tempf);
    tempc = (5.0 / 9.0) * (tempf - 32);
    printf("%.2f Fahrenheit is %.2f Celsius\n", tempf, tempc);
    return 0;
}
