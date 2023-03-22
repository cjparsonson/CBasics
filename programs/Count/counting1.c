#include <stdio.h>
#include <stdlib.h>

/* count lines in input */

int main(void) {
    int c, nl, bl, ta;

    nl = 0;
    bl = 0;
    ta = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ') {
            ++bl;
        }
        if (c == '\t') {
            ++ta;
        }
    }
    printf("Newlines: %d\n", nl);
    printf("Blanks: %d\n", bl);    
    printf("Tabs: %d\n", ta);    
    return EXIT_SUCCESS;
}



