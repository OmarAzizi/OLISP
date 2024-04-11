#include <stdio.h>
#include <stdlib.h>

/* 
    This library will help us create a better interactive prompt on linux by allowing editing 
    and recording the history of inputs so that they can be retrieved with the up and down arrows 
*/
#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
    /* Print Version and Exit Information */
    puts("OLISP Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* REPL Loop */
    while (1) {
        char* input = readline("OLISP> ");
        add_history(input); /* Adding input to history so it can be retrived */
        printf("No you're a %s\n", input);
        free(input);
    }
    return 0;
}
