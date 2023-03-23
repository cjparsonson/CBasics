#include <stdio.h>
#include <stdlib.h>

/* copy input to output */

int main(void) {
    int c;
    int count;

    
    while ((c = getchar()) != EOF) {
            if (c == ' ') {
                putchar(c);
                while ((c = getchar()) == ' ') {
                ++count;        
            }
        }
            if (c != ' ') {
                putchar(c);
        }


    }

    return EXIT_SUCCESS;
}

