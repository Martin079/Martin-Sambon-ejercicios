//Martin Sambon

/*cadena de caracteres mas repetidos*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int es_comun(char *sub, char palabras[5][MAX_LENGTH]) {
    for (int i = 1; i < 5; i++) {
        if (!strstr(palabras[i], sub)) {
            return 0;
        }
    }
    return 1;
}


void subcadena_comun(char palabras[5][MAX_LENGTH], char *resultado) {
    int longitud = strlen(palabras[0]);
    resultado[0] = '\0';
    
    for (int l = longitud; l > 0; l--) {
        for (int i = 0; i <= longitud - l; i++) {
            char sub[MAX_LENGTH];
            strncpy(sub, palabras[0] + i, l);
            sub[l] = '\0';
            
            if (es_comun(sub, palabras)) {
                strcpy(resultado, sub);
                return;
            }
        }
    }
}

int main() {
    char palabras[5][MAX_LENGTH], resultado[MAX_LENGTH];
    
    printf("Ingrese 5 palabras:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", palabras[i]);
    }
    
    subcadena_comun(palabras, resultado);
    
    if (strlen(resultado) > 0) {
        printf("La subcadena comun mas larga: %s\n", resultado);
    } else {
        printf("No hay subcadena comun.\n");
    }
    
    return 0;
}
