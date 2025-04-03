//Martin Sambon

/*nombre usuario*/

#include <stdio.h>
#include <string.h>

int main() {
char nombreIngresado[70];
char nombre[70];
char apellidoIngresado[70];
char apellido[70];

printf("Ingrese su nombre:\t");
scanf("%s",&nombreIngresado);
scanf("%s",&apellidoIngresado);
 
strcpy(nombre, nombreIngresado); 
strcpy(apellido, apellidoIngresado); 
printf("El nombre del usuario es:%s %s", nombre, apellido); 


return 0;

}
