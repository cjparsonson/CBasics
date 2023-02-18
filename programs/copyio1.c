#include <stdio.h>
#include <stdlib.h>

/* copy input to output first version */

int main(void) {
    int c;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return EXIT_SUCCESS;
}

