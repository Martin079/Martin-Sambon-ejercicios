//Martin Sambon

/*reemplazo caracter*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char cadena[100];
	int i;
    printf("Ingrese la cadena de caracteres:\t");
    fgets(cadena, sizeof(cadena),stdin); 
	
	int longitud = strlen(cadena);
	
	
	char letra[2], reemplazo[2];
	printf("Ingrese la letra a reemplazar\t");
	scanf("%s", letra);	
	printf("Ingrese la letra por la que se reemplaza\t");
	scanf("%s", reemplazo);	
	
	for(i=0;i<longitud;i++){
		if(cadena[i]==letra[0]){
			cadena[i]=reemplazo[0];
		}
	}
	
	printf("Palabra nueva:\n %s", cadena);
	
	return 0;
}
