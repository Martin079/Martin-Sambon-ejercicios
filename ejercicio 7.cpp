//Martin Sambon

/*palabra anagrama*/

#include <stdio.h>
#include <string.h>

void ordenar_cadena(char *cadena) {
    int len = strlen(cadena);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cadena[j] > cadena[j + 1]) {
                char temp = cadena[j];
                cadena[j] = cadena[j + 1];
                cadena[j + 1] = temp;
            }
        }
    }
}

int son_anagramas(char *copia1, char *copia2) {
    ordenar_cadena(copia1);
    ordenar_cadena(copia2);
    return strcmp(copia1, copia2) == 0;
}

int main() {
    char palabra1[100], palabra2[100], copia1[100], copia2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    strcpy(copia1, palabra1);
    strcpy(copia2, palabra2);

    if (son_anagramas(copia1, copia2)) {
        printf("Las palabras \"%s\" y \"%s\" son anagramas.\n", palabra1, palabra2);
    } else {
        printf("Las palabras \"%s\" y \"%s\" no son anagramas.\n", palabra1, palabra2);
    }
    
    return 0;
}
