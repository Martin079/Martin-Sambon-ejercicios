//Martin Sambon

/*invertir palabras*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[200];
    char palabras[200];
    int indices[50]; 
    int contador = 0, j = 0;
    
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    int longitud = strlen(cadena);
    
    for (int i = 0; i <= longitud; i++) {
        if (cadena[i] != ' ' && cadena[i] != '\n' && cadena[i] != '\0') {
            if (j == 0 || cadena[i - 1] == ' ') {
                indices[contador++] = j; 
            }
            palabras[j++] = cadena[i];
        } else if (j > 0 && palabras[j - 1] != '\0') {
            palabras[j++] = '\0'; 
        }
    }
    
    for (int i = contador - 1; i >= 0; i--) {
        printf("%s", &palabras[indices[i]]);
        if (i > 0) printf(" ");
    }
    printf("\n");
    
    return 0;
}
