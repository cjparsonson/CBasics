#include <stdio.h> 
#include <stdlib.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20 ..., 300 */

int main(void) {

    int lower = 0; /*lower limit of temp table*/
    int upper = 300; /*upper limit*/
    int step = 20; /* step size */

    int fahr = lower;

    while (fahr <= upper) {
        int celsius = 5*(fahr-32)/9;
        printf("%3d\t%6d\n",fahr,celsius);
        fahr = fahr + step;
    }
    return EXIT_SUCCESS;
}

