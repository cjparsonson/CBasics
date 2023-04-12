#include <stdio.h> 
#include <stdlib.h>

int main(void) {
    /* copy input to output, replacing tabs, backspaces and slashes */

    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }

    }
    return EXIT_SUCCESS;
}


