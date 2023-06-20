#include <stdio.h>
#include <stdlib.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count line, words, and characters in input */

int main(void) {
    printf("Press C+d to send EOF\n");
    int c,nl,nw,nc,state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
            putchar('\n');
        }
        putchar(c);
    }
    printf("Lines Words Chars\n");
    printf("%d     %d     %d\n", nl, nw, nc);
    return EXIT_SUCCESS;
}



