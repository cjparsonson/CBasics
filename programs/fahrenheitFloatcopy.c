#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int lower = 0;
    int upper = 300;
    int step = 20;

    /* Setup table */
    printf("-------------------------\n");
    printf("Fahrenheit\t Celsius\n");
    printf("-------------------------\n");
    float fahr = lower;
    while (fahr <= upper) {
        float celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return EXIT_SUCCESS;
}

