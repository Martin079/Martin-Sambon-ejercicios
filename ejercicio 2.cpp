//Martin Sambon


#include <stdio.h>
#include <string.h>

int main(){
    char cadena[70];
    int vocales = 0;

    printf("Ingrese la cadena de caracteres:\t");
    scanf("%s", cadena);  

    int longitud = strlen(cadena);
    int i;
    for(i = 0; i < longitud; i++){
        if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || 
           cadena[i] == 'o' || cadena[i] == 'u' || 
           cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || 
           cadena[i] == 'O' || cadena[i] == 'U'){
            vocales++;
        }
    }
    
    printf("La cantidad de vocales son: %d\n", vocales);
    return 0;
}

