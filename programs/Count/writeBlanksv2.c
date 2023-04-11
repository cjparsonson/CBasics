#include <stdio.h>
#include <stdlib.h>

/* copy input to output */

int main(void) {
    int c;
    int count;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            count++;
            do {
                putchar(c);
            }
            while ((c = getchar()) != ' ');

        }
        else if (c != ' ') {
            putchar(c);
        }
        else if (c == EOF) {
            break;
        }
    }
    printf("Total blanks entered: %d\n", count);

    return EXIT_SUCCESS;
}

            
                
            
         

    
    


