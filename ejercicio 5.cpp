//Martin Sambon

/*Contar palabras*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[100];
    int i;
    int palabras = 0;
    int enPalabra = 0;
	
	printf("Ingrese una frase:\t");
	fgets(cadena, sizeof(cadena), stdin);
	
	for(i=0; i < strlen(cadena); i++){
		if (cadena[i] == ' ' || cadena[i] == '\n'){
			enPalabra = 0;
		} else if (enPalabra == 0) {
		    palabras++;
		    enPalabra = 1;
		}
	}
	
	printf("La cantidad de palabras en la cadena es: %d\n", palabras);
	
	return 0;
}


