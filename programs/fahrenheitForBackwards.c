#include <stdio.h> 
#include <stdlib.h>

/* Count backwards */
int main(void) {
    int fahr;
    printf("Fahrenheit\t Celsius\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return EXIT_SUCCESS;
}

