%{
#include <stdio.h>
int encontrado = 0;
%}

%%
lambda[ ]+[a-zA-Z_][a-zA-Z0-9_]*[ ]*:[ ]*[^ \n]+ { 
    printf("ACEPTA\n"); 
    encontrado = 1;
}

.|\n    { /* Ignorar otros caracteres */ }

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *archivo = fopen(argv[1], "r");
        if (!archivo) {
            printf("Error al abrir el archivo.\n");
            return 1;
        }
        yyin = archivo;
    }

    yylex();

    if (!encontrado) {
        printf("NO ACEPTA\n");
    }

    return 0;
}

int yywrap() { return 1; }
