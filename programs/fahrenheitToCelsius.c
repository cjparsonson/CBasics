#include <stdlib.h>
#include <stdio.h>

/* Convert Fahrenheit to Celsius */
/* formula is fahr - 32 * (5/9) */

int main(void) {
    int lower = 0;
    int upper = 300;
    int step = 20;

    float celsius = lower;
    printf("Celsius\t\t Fahrenheit\n");
    printf("------------------------\n");

    while (celsius <= upper) {
        float fahr = (celsius * (9.0/5.0)) + 32;
        printf("%3.0f\t\t %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return EXIT_SUCCESS;
}


