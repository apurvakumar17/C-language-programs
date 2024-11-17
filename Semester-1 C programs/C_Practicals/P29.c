#include <stdio.h>

int main() {
    struct distance {
        int feet;
        float inch;
    };
    struct distance d1, d2, result;
    printf("\nPractical 29, 04814902024, Apurva Kumar\n");
    printf("Enter feet of the first distance: ");
    scanf("%d", &d1.feet);
    printf("Enter inches of the first distance: ");
    scanf("%f", &d1.inch);
    printf("Enter feet of the second distance: ");
    scanf("%d", &d2.feet);
    printf("Enter inches of the second distance: ");
    scanf("%f", &d2.inch);
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    if (result.inch >= 12.0) {
        result.feet += (int)(result.inch / 12);  
        result.inch = (int)result.inch % 12;   
    }
    printf("Total distance: %d feet and %.2f inches\n\n", result.feet, result.inch);
    return 0;
}