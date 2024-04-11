#include <stdio.h>
#include <stdlib.h>

/*
    If we are compiling on Windows compile these function
*/
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake `readline` function */
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy) - 1] = '\0';
    return cpy;
}

/* Fake `add_history` function */
void add_history(char* unused) {}

/* 
    Otherwise include the editline headers 
*/
#else
/* 
    This library will help us create a better interactive prompt on linux by allowing editing 
    and recording the history of inputs so that they can be retrieved with the up and down arrows 
*/
#include <editline/readline.h>
#include <editline/history.h>
#endif

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
