#include <stdio.h>
#include "include/lexer.h"

int main(int argc, char *argv[]) {
    printf("Welcome to IRL - Interpreted Runtime Language!\n");
    lexer_T* lexer = init_lexer("set name = \"Aritro Saha\";\nprint(name);");
    token_T* token = (void*) 0;

    while((token = lexer_get_next_token(lexer)) != (void*) 0){
        printf("TOKEN(%d, %s)\n", token->type, token->value);
    }

    return 0;
}