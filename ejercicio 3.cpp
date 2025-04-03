//Martin Sambon

/*cadena palindromo*/

#include <stdio.h>
#include <string.h>


int es_palindromo(char str[]){
    int inicio = 0;
    int fin = strlen(str) - 1;

    while (inicio < fin) {

        if (str[inicio] != str[fin]) {
            return 0; // No es palíndromo
        }
        inicio++;
        fin--;
    }

    return 1; // Es palíndromo
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    if (es_palindromo(palabra)) {
        printf("La palabra es un palindromo.\n");
    } else {
        printf("La palabra no es un palindromo.\n");
    }


    return 0;
}
