#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {
    /* Print Version and Exit Information */
    puts("OLISP Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* REPL Loop */
    while (1) {
        fputs("OLISP> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }
    return 0;
}
