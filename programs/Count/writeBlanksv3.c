#include <stdio.h> 
#include <stdlib.h> 

#define NONBLANK 'a'

int main(void) {
    int c, last_c, count, removed;

    last_c = NONBLANK;
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        else if (c == ' ') {
            count++;
            if (last_c != ' ') {
                putchar(c);
            }
            else {
                removed++;
            }
        }
        last_c = c;
    }
    printf("Blanks counted: %d\n", count);
    printf("Blanks removed: %d\n", removed);
    return EXIT_SUCCESS;
}

