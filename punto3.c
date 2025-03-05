#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int contar_palabra(FILE *archivo, const char *clave) {
    char linea[MAX_LINE];
    int count = 0;
    size_t clave_len = strlen(clave);

    while (fgets(linea, MAX_LINE, archivo) != NULL) {
        char *pos = linea;
        while ((pos = strstr(pos, clave)) != NULL) {
            count++;
            pos += clave_len; 
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <archivo> <palabra_clave>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        perror("Error al abrir el archivo");
        return 1;
    }

    int repeticiones = contar_palabra(archivo, argv[2]);
    fclose(archivo);

    printf("'%s' se repite %d veces en el texto.\n", argv[2], repeticiones);

    return 0;
}
