#include <stdio.h>
#include <stdlib.h>

/* copy input to output */

int main(void) {
    int c;
    int count;

    
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ') {
                        
            }
        }

    }

    return EXIT_SUCCESS;
}

