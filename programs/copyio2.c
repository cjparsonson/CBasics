#include <stdio.h>
#include <stdlib.h>

/* copy input to output 2nd version */
int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return EXIT_SUCCESS;
}

