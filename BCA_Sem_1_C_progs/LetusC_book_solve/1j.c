#include <stdio.h>

int main() {
    int pop = 80000;
    int men = 0.52 * pop;
    int illmen = men - (0.35 * pop);
    int literate_pop = 0.48 * pop;
    int illwomen = (pop - men) - (literate_pop - (0.35 * pop));
    printf("Illiterate men population: %d\n", illmen);
    printf("Illiterate women population: %d\n", illwomen);
    return 0;
}
