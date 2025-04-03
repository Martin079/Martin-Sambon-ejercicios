//Martin Sambon

/*buscar subcadena dentro de cadena*/

#include <stdio.h>
#include <string.h>

void buscarSubcadena(const char *cadena, const char *subcadena) {
    char *posicion = strstr(cadena, subcadena);
    
    if (posicion != NULL) {
        int indice = posicion - cadena;
        printf("La subcadena '%s' se encuentra en la posicion %d de la cadena.\n", subcadena, indice);
    } else {
        printf("La subcadena '%s' no se encuentra en la cadena.\n", subcadena);
    }
}

int main() {
    char cadena[100], subcadena[50];
    
    printf("Ingrese la cadena principal: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }
    
    printf("Ingrese la subcadena a buscar: ");
    fgets(subcadena, sizeof(subcadena), stdin);
    
    len = strlen(subcadena);
    if (len > 0 && subcadena[len - 1] == '\n') {
        subcadena[len - 1] = '\0';
    }
    
    buscarSubcadena(cadena, subcadena);
    
    return 0;
}
